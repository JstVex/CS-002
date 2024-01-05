cmake_minimum_required(VERSION 3.26)
project(fileio)

set(CMAKE_CXX_STANDARD 17)

add_executable(fileio main.cpp
        functions.cpp
        functions.h)
