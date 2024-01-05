cmake_minimum_required(VERSION 3.26)
project(die_rolls)

set(CMAKE_CXX_STANDARD 17)

add_executable(die_rolls main.cpp
        functions.cpp
        functions.h)
