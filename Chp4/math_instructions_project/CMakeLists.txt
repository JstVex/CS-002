cmake_minimum_required(VERSION 3.26)
project(math_instructions_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(math_instructions_project main.cpp
        functions.cpp
        functions.h
)
