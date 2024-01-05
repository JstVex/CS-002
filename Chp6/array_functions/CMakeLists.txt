cmake_minimum_required(VERSION 3.26)
project(array_functions)

set(CMAKE_CXX_STANDARD 17)

add_executable(array_functions main.cpp
        functions.cpp
        functions.h)
