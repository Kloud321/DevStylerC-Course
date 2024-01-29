cmake_minimum_required(VERSION 3.27)
project(OverloadOperatorForOutput)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OverloadOperatorForOutput
        Price.cpp
        Price.h
        main.cpp)
