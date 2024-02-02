cmake_minimum_required(VERSION 3.27)
project(Library)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Library
        Book.cpp
        Book.h
        main.cpp
        Member.h
        Member.cpp
)
