cmake_minimum_required(VERSION 3.27)
project(Cinema_C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cinema_C__ main.cpp
        Screening.cpp
        Screening.h
        Hall.cpp
        Hall.h
        Cinema.cpp
        Cinema.h
        MovieFinder.cpp
        MovieFinder.h)
