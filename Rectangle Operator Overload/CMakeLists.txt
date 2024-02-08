cmake_minimum_required(VERSION 3.27)
project(Car_Personal_Preparation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Car_Personal_Preparation
        main.cpp
        Rectangle.h
        Rectangle.cpp)
