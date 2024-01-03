cmake_minimum_required(VERSION 3.26)
project(functions_examples)

set(CMAKE_CXX_STANDARD 17)

add_executable(functions_examples main.cpp
        functions.cpp
        functions.h
)
