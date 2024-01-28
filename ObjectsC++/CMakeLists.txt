cmake_minimum_required(VERSION 3.27)
project(ObjectsC__)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObjectsC__ main.cpp
        Student.cpp
        Student.h
        Teacher.cpp
        Teacher.h
        Discipline.cpp
        Discipline.h
        Class.cpp
        Class.h
        School.cpp
        School.h)
