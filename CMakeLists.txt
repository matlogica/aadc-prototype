cmake_minimum_required(VERSION 3.5)

project(example C CXX ASM)

set(CMAKE_C_COMPILER   $ENV{CC} )
set(CMAKE_CXX_COMPILER $ENV{CXX})
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O3 -march=haswell -g -Wall -Wextra")
# Uncomment this for avx512
# set(CMAKE_CXX_FLAGS "-O3 -march=skylake-avx512 -g -Wall -Wextra")

find_package( Threads )

add_executable(example example.cpp )

target_link_libraries (example ${CMAKE_THREAD_LIBS_INIT})
