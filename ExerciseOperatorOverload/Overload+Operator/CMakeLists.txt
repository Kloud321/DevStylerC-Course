cmake_minimum_required(VERSION 3.27)
project(Overload_Operator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Overload_Operator
        Price.cpp
        Price.h
        main.cpp)
