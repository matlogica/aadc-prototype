# AADC Prototype Library

## Overview 

That library is a prototype implementation of automatic adjoint differentiation (AAD) approach developed by MatLogica.
Please check website for more information: http://www.matlogica.com/

As an example, we attempt to differentiate code recorded inside 
function mySuperModelFunc() and calculate derivatives using:
* finite-differences method
* AAD method using double scalar function
* AAD method using AVX256 or AVX512 vector   

## Build and Run
Library was tested to compile with GCC, CLang & Intel compilers on Linux platform

Run the following commands to build the project: 
* mkdir build
* cd build
* cmake ..
* make 
* run binary ./example

## Regenerate AAD function

Pre-generated AAD code is included in the project. 
If you wish to make changes to primal function and regenerate AAD code, you will need:
* uncomment line #define REGENERATE_AAD_FUNCTION inside example.cpp file
* run command **make**
* run command **./example**
* comment out line #define REGENERATE_AAD_FUNCTION
* run command **make && ./example**

That will update auto-generated AAD function and compile + link updated definition inside "example" binary file.  

## Sample Output
```
Primal function & FD derivatives:
f(0.5,1) = 406.892
dx = -10.2952
da = -0.793778

Compiled function & AAD derivatives (scalar case):
f(0.5,1) = 406.892
dx = -10.2904
da = -0.793772

Integral of Primal function & FD derivative:
f() = 451.175
da  = -0.717925
time= 1650860

Compiled function & AAD derivatives (AVX256)
f (0.5,1) = 406.892
dx = -10.2904
da = -0.793772

Integral[0,1] of AVX AAD function using Monte-Carlo & 1 thread:
f() = 451.175
da  = -0.718056
time= 676434

Integral[0,1] of AVX AAD function using Monte-Carlo & 4 threads:
f() = 451.175
da  = -0.718056
time= 177143
```