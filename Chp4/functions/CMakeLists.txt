cmake_minimum_required(VERSION 3.26)
project(functions)

set(CMAKE_CXX_STANDARD 17)

add_executable(functions main.cpp
        functions.cpp
        functions.h)
