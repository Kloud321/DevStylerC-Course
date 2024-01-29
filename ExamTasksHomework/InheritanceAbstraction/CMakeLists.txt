cmake_minimum_required(VERSION 3.27)
project(InheritanceAbstraction)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(InheritanceAbstraction
        shape.cpp
        shape.h
        Circle.h
        Rectangle.h
        Circle.cpp
        main.cpp
        Rectangle.cpp)
