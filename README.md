# AADC Prototype Library

## Overview 

That library is a prototype implementation of automatic adjoint differentiation (AAD) approach developed by MatLogica.
Please check website for more information: http://www.matlogica.com/

As an example, we attempt to differentiate code recoded inside 
function mySuperModelFunc() and calculate derivatives using:
* finite-differences method
* AAD method using double scalar function
* AAD method using AVX256 or AVX512 vector   

## Requirements

Library was tested to compile with GCC, CLang & Intel compilers on Linux platform
 
## Build and Run

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

## Sample Output with comments
```
// primal at (0.5,1) point
primal(0.5,1) = 406.892

// derivatives at (0.5,1) using  finite-difference method
FD dx = -10.2952
FD da = -0.793778

// forward execution of compiled AAD scalar double version
Compiled function (0.5,1) = 406.892

// derivatives from adjoint pass of AAD function 
AAD dx = -10.2904
AAD da = -0.793772

// Integral of primal function computed using Monte-Carlo F(a) = Integral_0^1 primal(a,x) dx
Integral of Primal function
Result   : 451.175
FD da    : -0.717925
Exec time: 1056001

// Forward execution of compiled AVX AAD function at (0.5,1) point
AVX256
AVX Compiled function (0.5,1) = 406.892

// derivatives from adjoint pass of AVX AAD function at (0.5,1) 
AVX AAD dx = -10.2904
AVX AAD da = -0.793772

// Compiled AVX function integral computded using Monte-Carlo F(a) = Integral_0^1 f(a,x) dx
Integral Vector thread 0 time:709301
Integral Vector Result 451.175

// Derivative of the integral dF/da
Integral Vector Result da -0.718056

//////// AVX MT case
Integral Vector thread 1 time:196249
Integral Vector thread 0 time:196288
Integral Vector thread 3 time:196333
Integral Vector thread 2 time:196511

// Same integral and AVX function executed in multi-thread
AVX MT4 Vector Result 451.175
AVX MT4 Vector Result da -0.718056
AVX MT4 Vector walk clock time: 196625
```