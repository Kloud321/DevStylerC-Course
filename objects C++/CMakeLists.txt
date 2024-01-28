cmake_minimum_required(VERSION 3.27)
project(objects_C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(objects_C__ main.cpp
        carService.h
        car.cpp)
