cmake_minimum_required(VERSION 3.27)
project(ToDoList)

set(CMAKE_CXX_STANDARD 17)

add_executable(ToDoList main.cpp
        Task.h
        User.h
        Employee.h
        Manager.h
        Task.cpp
        User.cpp
        Manager.cpp
        Employee.cpp)
