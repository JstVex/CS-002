cmake_minimum_required(VERSION 3.26)
project(choose_your_own_adventure)

set(CMAKE_CXX_STANDARD 17)

add_executable(choose_your_own_adventure main.cpp
        functions.cpp
        functions.h)
