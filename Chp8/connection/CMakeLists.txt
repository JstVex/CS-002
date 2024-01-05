cmake_minimum_required(VERSION 3.26)
project(connection)

set(CMAKE_CXX_STANDARD 17)

add_executable(connection main.cpp
        functions.h
        functions.cpp)

target_link_libraries(connection sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)