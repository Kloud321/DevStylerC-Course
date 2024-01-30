cmake_minimum_required(VERSION 3.27)
project(Prefix_and_postfix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prefix_and_postfix
        Price.cpp
        Price.h
        main.cpp)
