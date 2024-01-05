cmake_minimum_required(VERSION 3.26)
project(sfml_tryout)

set(CMAKE_CXX_STANDARD 17)

add_executable(sfml_tryout main.cpp)
target_link_libraries(sfml_tryout sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)