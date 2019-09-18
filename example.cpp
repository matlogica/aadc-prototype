#include "NaiveAADLib.h"
#include <iostream>
#include <fstream>
#include <random>
#include <immintrin.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <thread>
#include <chrono>

// #define REGENERATE_AAD_FUNCTION
#define USE_AVX_256
// #define USE_AVX_512

#ifdef USE_AVX_256
typedef __m256d mmType;
#endif
#ifdef USE_AVX_512
typedef __m512d mmType;
#endif

#ifdef USE_AVX_256
#define MM_ADD _mm256_add_pd
#define MM_SET1 _mm256_set1_pd
#else
#define MM_ADD _mm512_add_pd
#define MM_SET1 _mm512_set1_pd
#endif


#ifndef REGENERATE_AAD_FUNCTION
    #include "mySuperModelFuncAAD.h"
    #ifdef USE_AVX_256
        #include "mySuperModelFuncAAD256.h"
    #endif
    #ifdef USE_AVX_512
        #include "mySuperModelFuncAAD512.h"
    #endif
#endif

template<class mdouble>
mdouble mySuperModelFunc( mdouble x, mdouble a) {
    const int I=100;
    mdouble v1=x, v2=x, v3=1; 
    for (int i=0; i <I; i++) {
        v3 = v3+((v1+v2) / (v1 + v2 + a))
         + (v1+1) / v1 + (v2+1) / v2 
            + (v1*v2 / (v1*v2 + 1));
        v1 = v2;
        v2 = v3+a;
//        v=v+aux;
    }
    return v3;
}

int main() {
    std::mt19937_64 gen(17);
    std::uniform_real_distribution<> uniform_distrib(0, 1); 

    double a(1.0), x(0.5);
    ////////////////////////////////
    // Calling primal function
    ////////////////////////////////

    double primal_res = mySuperModelFunc(x,a);
    std::cout << "primal(" << x << "," << a << ") = " << primal_res << std::endl;

    ////////////////////////////////
    // Estimate primal derivatives using FD
    ////////////////////////////////
    double h(0.01);
    double fd_da = (mySuperModelFunc(x, a+h) - mySuperModelFunc(x, a-h)) / (2*h);    
    double fd_dx = (mySuperModelFunc(x+h, a) - mySuperModelFunc(x-h, a)) / (2*h);    

    std::cout << "FD dx = " << fd_dx << std::endl;
    std::cout << "FD da = " << fd_da << std::endl;

    ////////////////////////////////
    // Recording AAD version of the primal function using scalar double type
    ////////////////////////////////
    #ifdef REGENERATE_AAD_FUNCTION
        initAADLib();
        codeVersion = ScalarCode;

        // Record user valuations as AAD functions using specific values for x,y,z
        dagdouble x_aad(5, AADInputVariable);
        dagdouble a_aad(1, AADInputVariable);
        dagdouble res = mySuperModelFunc(x_aad, a_aad);
        res.markAsOutput();

        // Generate AAD functions
        generateAADFunction("../", "mySuperModelFuncAAD");
        std::cout << "Saved Scalar AAD Function" << std::endl;
    #else
    ////////////////////////////////
    // Scalar AAD Function is generated and compiled. Let's try to call it
    ////////////////////////////////
    double aad_res, aad_dx(0.0), aad_da(0.0);
    mySuperModelFuncAAD(
        x, a,
        aad_res,
        aad_dx, aad_da,
        1.0
    );

    std::cout << "Compiled function (" << x << "," << a << ") = " << aad_res << std::endl;
    std::cout << "AAD dx = " << aad_dx << std::endl;
    std::cout << "AAD da = " << aad_da << std::endl;

    if (fabs(aad_res - primal_res) > 1e-10) {
        std::cout << "ERROR: Compiled and primal didn't match!!! Rebuild function?" << std::endl;
    }
    #endif

    ////////////////////////////////
    // Compute integral_0^1 using MC with primal double function
    ////////////////////////////////

    int AVXCount = sizeof(mmType) / sizeof(double);
    double* random_vector;
    int random_vector_size(AVXCount*250000);
    random_vector = (double*)aligned_alloc(8*8, random_vector_size*sizeof(double));
    int iterations=random_vector_size; 
    double fd_bump(0.001);

    for (int ni = 0; ni < iterations; ++ni) {
        random_vector[ni] =  uniform_distrib(gen);
    }

    double sc_result=0, sc_result_bump=0;

    auto base_start = std::chrono::high_resolution_clock::now();
 	auto  base_stop = std::chrono::high_resolution_clock::now();
	std::chrono::microseconds base_time;
    
    for (int heat=0; heat<30; heat++) {
        sc_result=0;
        base_start = std::chrono::high_resolution_clock::now();
            for (int i=0; i<iterations; i++) {
                sc_result += mySuperModelFunc(random_vector[i], a);
            }
        base_stop = std::chrono::high_resolution_clock::now();
   
        if (heat==25) {
            base_time = std::chrono::duration_cast<std::chrono::microseconds>(base_stop - base_start);
            for (int i=0; i<iterations; ++i) {
                sc_result_bump += mySuperModelFunc(random_vector[i], a+fd_bump);
            }
		}

    }
    cout << "Integral Scalar result    :" << sc_result/double(iterations) << "\n";
    cout << "Integral Scalar derivative:" << (sc_result_bump - sc_result)/fd_bump/double(iterations) << "\n";
    std::cout << "Integral Scalar time:" << base_time.count() << "\n";            

    #ifdef REGENERATE_AAD_FUNCTION
    ////////////////////////////////
    // Record vectorized avx version of the AAD function
    ////////////////////////////////
    {
        initAADLib();

        codeVersion = AVX;
        avxbits = sizeof(mmType)*8;

        // Record user valuations as AAD functions using specific values for x,y,z
        dagdouble x_aad(5, AADInputVariable);
        dagdouble a_aad(1, AADInputVariable);
        dagdouble res = mySuperModelFunc(x_aad, a_aad);
        res.markAsOutput();
            
        generateAADFunction("../", "mySuperModelFuncAAD");

        std::cout << "Saved AVX AAD Function" << std::endl;
    }
    #else
    ////////////////////////////////
    // the AVX AAD Function is generated and compiled. Let's try to call it
    ////////////////////////////////
    {
        mmType aad_res, aad_dx(MM_SET1(0.0)), aad_da(MM_SET1(0.0));
        mySuperModelFuncAAD(
            MM_SET1(x), MM_SET1(a),
            aad_res,
            aad_dx, aad_da,
            MM_SET1(1.0)
        );

        std::cout << "AVX" << sizeof(mmType)*8 << std::endl;
        std::cout << "AVX Compiled function (" << x << "," << a << ") = " << aad_res[0] << std::endl;
        std::cout << "AVX AAD dx = " << aad_dx[0] << std::endl;
        std::cout << "AVX AAD da = " << aad_da[0] << std::endl;

        if (fabs(aad_res[0] - primal_res) > 1e-10) {
            std::cout << "ERROR: Compiled and primal didn't match!!! Rebuild function?" << std::endl;
        }
    }
    #endif

    #ifndef REGENERATE_AAD_FUNCTION
    ////////////////////////////////
    // Compute integral_0^1 using MC with AVX AAD function
    ////////////////////////////////

    auto processMCSamples = [AVXCount] (
        double &res_sum, 
        double &da_sum,
        double a,
        const double* random_vector,
        const uint64_t iterations,
        const uint64_t thread_id
    )
    {
        // Run recorded function with arbitrary inputs
        mmType avx_res, aad_dx(MM_SET1(0.0)), avx_a(MM_SET1(a)), avx_da_sum(MM_SET1(0.0));
        mmType avx_res_sum(MM_SET1(0.0));
//        double res_sum(0.0), da_sum(0.0);
               
        auto record_start = std::chrono::high_resolution_clock::now();
        for(uint64_t i=0; i<iterations/AVXCount; i++) {
            mmType avx_da = MM_SET1(0.0);
            mySuperModelFuncAAD(
                *(mmType*)(&random_vector[i*AVXCount]), avx_a,
                avx_res,
                aad_dx, avx_da,
                MM_SET1(1.0)
            );
            avx_res_sum = MM_ADD(avx_res, avx_res_sum);
            avx_da_sum = MM_ADD(avx_da, avx_da_sum);
        }
    
        for (int i=0; i<AVXCount; i++) { 
            res_sum += avx_res_sum[i];
            da_sum += avx_da_sum[i];
        }

        auto record_stop = std::chrono::high_resolution_clock::now();
        std::chrono::microseconds record_time = std::chrono::duration_cast<std::chrono::microseconds>(record_stop - record_start);
        
        std::cout << "Integral Vector thread " << thread_id << " time:" << record_time.count() << "\n";    
    };
    double res_sum(0.0), da_sum(0.0);
    processMCSamples(res_sum, da_sum, a, random_vector, iterations, 0);
    cout << "Integral Vector Result " << res_sum/iterations << "\n";
    cout << "Integral Vector Result da " << da_sum/iterations << "\n";

    ////////////////////////////////
    // Compute integral_0^1 using MC with AVX AAD function in multi-thread
    ////////////////////////////////
    {
    cout << "//////// AVX MT case" << std::endl;
        int num_threads = 4;
        std::vector<double> integral_parts(num_threads), da_parts(num_threads); 
        double mt_integral(0.0), mt_da(0.0);
        std::vector<std::unique_ptr<thread>> threads;
        auto record_start = std::chrono::high_resolution_clock::now();
        for(int i=0; i< num_threads; i++) {
            threads.push_back(
                std::unique_ptr<thread>(
                    new thread(
                        processMCSamples
                        , std::ref(integral_parts[i])
                        , std::ref(da_parts[i])
                        , a
                        , random_vector + i * (iterations/num_threads)
                        , iterations/num_threads
                        , i
                    )
                )
            );
        }
        for(auto&& t: threads) t->join();

        for(int i=0; i< num_threads; i++) {
            mt_integral+=integral_parts[i];
            mt_da += da_parts[i];
        }
        mt_integral/=iterations; mt_da/=iterations;

        auto record_stop = std::chrono::high_resolution_clock::now();
        std::chrono::microseconds record_time = std::chrono::duration_cast<std::chrono::microseconds>(record_stop - record_start);
        
        cout << "AVX MT" << num_threads << " Vector Result " << mt_integral << "\n";
        cout << "AVX MT" << num_threads << " Vector Result da " << mt_da << "\n";
        cout << "AVX MT" << num_threads << " Vector walk clock time: " << record_time.count() << "\n";
    }
    #endif // REGENERATE_AAD_FUNCTION
    free(random_vector);

    return 0;
}

