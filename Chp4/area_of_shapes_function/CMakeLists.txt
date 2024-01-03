cmake_minimum_required(VERSION 3.26)
project(area_of_shapes_function)

set(CMAKE_CXX_STANDARD 17)

add_executable(area_of_shapes_function main.cpp
        functions.cpp
        functions.h)
