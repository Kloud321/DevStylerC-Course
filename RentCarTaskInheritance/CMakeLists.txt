cmake_minimum_required(VERSION 3.27)
project(RentCarTaskInheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(RentCarTaskInheritance main.cpp
        FamilyCar.h
        FamilyCar.cpp
        Car.cpp
        LuxuryCars.h
        LuxuryCars.cpp)
