cmake_minimum_required(VERSION 3.27)
project(TaskSumOfVectors)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TaskSumOfVectors
        main.cpp
        SumOfVectors.h)
