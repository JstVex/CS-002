cmake_minimum_required(VERSION 3.26)
project(vectors)

set(CMAKE_CXX_STANDARD 17)

add_executable(vectors main.cpp
        functions.h
        functions.cpp)
