cmake_minimum_required(VERSION 3.27)
project(Employee_Managment_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Employee_Managment_System
        Employee.cpp
        Employee.h
        main.cpp
        Department.h
        Department.cpp)
