cmake_minimum_required(VERSION 3.27)
project(XML)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(XML
        pugiconfig.h
        pugixml.cpp
        pugixml.h
        main.cpp)
