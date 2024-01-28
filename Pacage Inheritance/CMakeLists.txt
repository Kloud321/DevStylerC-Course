cmake_minimum_required(VERSION 3.27)
project(Pacage_Inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pacage_Inheritance main.cpp
        Package.h
        TwoDayPackage.h
        Adress.h
        Adress.cpp
        OverNightPackage.h
        Package.cpp
        TwoDayPackage.cpp
        OverNightPackage.cpp)
