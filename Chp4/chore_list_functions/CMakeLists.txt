cmake_minimum_required(VERSION 3.26)
project(chore_list_functions)

set(CMAKE_CXX_STANDARD 17)

add_executable(chore_list_functions main.cpp
        functions.cpp
        functions.h)
