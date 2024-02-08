cmake_minimum_required(VERSION 3.27)
project(XMLfix)

set(CMAKE_CXX_STANDARD 17)

add_executable(XMLfix main.cpp
        pugixml.cpp
        pugixml.h
        pugiconfig.h
        Employee.h
        Workstation.h
        Employee.cpp
        Workstation.cpp
)
