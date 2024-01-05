cmake_minimum_required(VERSION 3.26)
project(welcome_back)

set(CMAKE_CXX_STANDARD 17)

add_executable(welcome_back main.cpp
        functions.cpp
        functions.h)
