#include <vector>
#include <set>
#include <sstream>
#include <cstdint>
#include <iostream>
#include <fstream>


using namespace std;

int var_counter = 0;

int getNextVarCounter() {
    return var_counter++;
}

bool AADInputVariable = true;

enum CodeVersion { ScalarCode, AVX };

int avxbits = 256;

CodeVersion codeVersion;

set<int> inputIndex;
set<int> outputIndex;

std::vector<std::string> aad_func_fwd, aad_func_rev;

void aadAssignConst(int indx, double c) {
    stringstream fstr;
    if (codeVersion == ScalarCode) {
        fstr << "v" << indx << "=" << c << ";";    
    }
    else {
        fstr << "v" << indx << "=_mm" << avxbits << "_set1_pd(" << c << ");";
    }

    aad_func_fwd.push_back(fstr.str());
}

void aadAssign(int indx, int other_indx) {
    stringstream fstr, rstr;
    fstr << "v" << indx << "=" << "v" << other_indx << ";";    
    if (codeVersion == ScalarCode) {
        rstr << "d" << other_indx << "+=" << "d" << indx << ";";
    }
    else {
        rstr << "d" << other_indx << "=_mm" << avxbits << "_add_pd(d" << other_indx << ",d" << indx << ");";
    }
    aad_func_fwd.push_back(fstr.str());
    aad_func_rev.push_back(rstr.str());
}

void aadAdd(int res_indx, int a_indx, int b_indx) {
    stringstream fstr, rstr;
    if (codeVersion == ScalarCode) {
        fstr << "v" << res_indx << "=" << "v" << a_indx << "+v" << b_indx << ";";    
        rstr << "d" << a_indx << "+=" << "d" << res_indx << ";"
             << "d" << b_indx << "+=" << "d" << res_indx << ";";
    }
    else {
        fstr << "v" << res_indx << "=_mm" << avxbits << "_add_pd(v" << a_indx << ",v" << b_indx << ");";
        rstr << "d" << a_indx << "=_mm" << avxbits << "_add_pd(d" << a_indx << ",d" << res_indx << ");"
             << "d" << b_indx << "=_mm" << avxbits << "_add_pd(d" << b_indx << ",d" << res_indx << ");"
        ;
    }
    aad_func_fwd.push_back(fstr.str());
    aad_func_rev.push_back(rstr.str());
}

void aadSub(int res_indx, int a_indx, int b_indx) {
    stringstream fstr, rstr;
    if (codeVersion == ScalarCode) {
        fstr << "v" << res_indx << "=" << "v" << a_indx << "+v" << b_indx << ";";    
        rstr << "d" << a_indx << "-=" << "d" << res_indx << ";"
             << "d" << b_indx << "-=" << "d" << res_indx << ";";
    }
    else {
        fstr << "v" << res_indx << "=_mm" << avxbits << "_sub_pd(v" << a_indx << ",v" << b_indx << ");";
        rstr << "d" << a_indx << "=_mm" << avxbits << "_add_pd(d" << a_indx << ",d" << res_indx << ");"
            << "d" << b_indx << "=_mm" << avxbits << "_sub_pd(d" << b_indx << ",d" << res_indx << ");"
        ;
    }
    aad_func_fwd.push_back(fstr.str());
    aad_func_rev.push_back(rstr.str());
}

void aadMult(int res_indx, int a_indx, int b_indx) {
    stringstream fstr, rstr;
    if (codeVersion == ScalarCode) {
        fstr << "v" << res_indx << "=" << "v" << a_indx << "*v" << b_indx << ";";    
        rstr << "d" << a_indx << "+=" << "d" << res_indx << "*v" << b_indx << ";"
            << "d" << b_indx << "+=" << "d" << res_indx << "*v" << a_indx << ";"
        ;
    }
    else {
        fstr << "v" << res_indx << "=_mm" << avxbits << "_mul_pd(v" << a_indx << ",v" << b_indx << ");";
        rstr << "d" << a_indx << "=_mm" << avxbits << "_fmadd_pd(d" << res_indx << ",v" << b_indx << ",d" << a_indx << ");"
            << "d" << b_indx << "=_mm" << avxbits << "_fmadd_pd(d" << res_indx << ",v" << a_indx << ",d" << b_indx << ");"
        ;
    }
    aad_func_fwd.push_back(fstr.str());
    aad_func_rev.push_back(rstr.str());
}

void aadDiv(int res_indx, int a_indx, int b_indx) {
    stringstream fstr, rstr;
    if (codeVersion == ScalarCode) {
        fstr << "v" << res_indx << "=" << "v" << a_indx << "/v" << b_indx << ";";    
        rstr << "d" << a_indx << "+=" << "d" << res_indx << "/v" << b_indx << ";"
            << "d" << b_indx << "-=" << "d" << res_indx << "*v" << a_indx 
                << "/(v" << b_indx << "*v" << b_indx << ");"
        ;
    }
    else {
        fstr << "v" << res_indx << "=_mm" << avxbits << "_div_pd(v" << a_indx << ",v" << b_indx << ");\n";
        rstr << "tmp = _mm" << avxbits << "_div_pd(_mm" << avxbits << "_set1_pd(1.0),v" << b_indx << ");\n" 
            << "d" << a_indx << "=_mm" << avxbits << "_fmadd_pd(d" << res_indx << ",tmp,d" << a_indx << ");\n"
            << "d" << b_indx << "=_mm" << avxbits << "_fnmadd_pd(_mm" 
            << avxbits << "_mul_pd(d" << res_indx << ",v" << a_indx << "),_mm" 
            << avxbits << "_mul_pd(tmp, tmp),"<< "d" << b_indx << ");\n";
    }
    aad_func_fwd.push_back(fstr.str());
    aad_func_rev.push_back(rstr.str());
}


class dagdouble {
public:
    dagdouble() {}
    dagdouble(const double& val, bool isInput = false) : val(val) {
        indx = getNextVarCounter();
        if (!isInput) {
            aadAssignConst(indx, val);
        } else {
            inputIndex.insert(indx);
        }
    }
    dagdouble(const dagdouble& other) : val(other.val) {
        indx = getNextVarCounter();        
        aadAssign(indx, other.indx);
    }
    
    ~dagdouble() {}
    dagdouble& operator = (const dagdouble& other) {
        val = other.val;
        indx = getNextVarCounter();        

        aadAssign(indx, other.indx);
        return *this;
    }
    void markAsOutput() {
        outputIndex.insert(indx);
    }

    double val;
    int indx;
};

dagdouble operator +(const dagdouble& a, const dagdouble& b) {
    dagdouble res;
    res.val = a.val + b.val;
    res.indx = getNextVarCounter();        
    aadAdd(res.indx, a.indx, b.indx);
    return res;
}

dagdouble operator - (const dagdouble& a, const dagdouble& b) {
    dagdouble res;
    res.val = a.val - b.val;
    res.indx = getNextVarCounter();        
    aadSub(res.indx, a.indx, b.indx);
    return res;
}

dagdouble operator *(const dagdouble& a, const dagdouble& b) {
    dagdouble res;
    res.val = a.val * b.val;
    res.indx = getNextVarCounter();        
    aadMult(res.indx, a.indx, b.indx);
    return res;
}

dagdouble operator /(const dagdouble& a, const dagdouble& b) {
    dagdouble res;
    res.val = a.val / b.val;
    res.indx = getNextVarCounter();        
    aadDiv(res.indx, a.indx, b.indx);
    return res;
}

void generateAADFunction(const char* path, const char* name) {
    ofstream fout(string(path) + string(name) + (codeVersion != ScalarCode ? to_string(avxbits) : string("")) + ".h");

    string var_type("double");
    string zero_init("0.0");

    if (codeVersion != ScalarCode) {
        fout << "#include <immintrin.h>" << endl;
        if (avxbits == 256) { 
            var_type = "__m256d";
            zero_init = "_mm256_setzero_pd()";
        } else {
            var_type = "__m512d";
            zero_init = "_mm512_setzero_pd()";
        }
    }

    fout << "void " << name << "(";
    for(int vi : inputIndex) fout << var_type << " v" << vi << ",";
    for(int vi : outputIndex) fout << var_type << "& v" << vi << ",";
    for(int vi : inputIndex) fout << var_type << "& d" << vi << ",";
    for(int vi : outputIndex) {
        fout << var_type <<" d" << vi;
        if (vi != *(outputIndex.rbegin())) fout << ",";
    }
    fout << ") {" << endl;
    fout << "\t" << var_type << " tmp";
    for(int i = 0; i < var_counter; ++i) {
        if (inputIndex.find(i) == inputIndex.end() && outputIndex.find(i) == outputIndex.end()) {
            fout << ",v" << i << ",d" << i << "(" << zero_init << ")"; 
        }
    }
    fout << ";" << endl;

    fout << "// forward function : " << std::endl;
    for (uint64_t i = 0; i < aad_func_fwd.size(); ++i) {
        fout << "\t" << aad_func_fwd[i] << std::endl;
    }
    fout << "// reverse function : " << std::endl;
    for (uint64_t i = aad_func_rev.size(); i > 0; --i) {
        fout << "\t" << aad_func_rev[i-1] << std::endl;
    }

    fout << "}" << endl;
}

void initAADLib() {
    var_counter = 0;
    AADInputVariable = true;

    avxbits = 256;
    codeVersion = ScalarCode;

    inputIndex.clear();
    outputIndex.clear();

    aad_func_fwd.clear();
    aad_func_rev.clear();
}