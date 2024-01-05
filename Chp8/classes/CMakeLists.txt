cmake_minimum_required(VERSION 3.26)
project(classes)

set(CMAKE_CXX_STANDARD 17)

add_executable(classes main.cpp
        Square.h
        Square.cpp
        functions.h
        MouseEvents.cpp
        MouseEvents.h
        functions.cpp
        Position.cpp
        Position.h
        Grid.cpp
        Grid.h
        Mistakes.cpp
        Mistakes.h
        Connection.cpp
        Connection.h
)

target_link_libraries(classes sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)