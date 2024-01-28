cmake_minimum_required(VERSION 3.27)
project(ExamPerpBook)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExamPerpBook main.cpp
        Book.h
        Book.cpp
        Author.h
        Author.cpp
        Genre.h
        Library.cpp
        Genre.cpp)
