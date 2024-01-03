cmake_minimum_required(VERSION 3.26)
project(three_card_monty)

set(CMAKE_CXX_STANDARD 17)

add_executable(three_card_monty main.cpp
        functions.cpp
        functions.h)
