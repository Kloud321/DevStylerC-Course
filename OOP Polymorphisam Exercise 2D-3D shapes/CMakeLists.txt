cmake_minimum_required(VERSION 3.27)
project(OOP_Polymorphisam_Exercise_2D_3D_shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_Polymorphisam_Exercise_2D_3D_shapes main.cpp
        Shape.cpp
        ThreeDemensionalShape.cpp
        TwoDimensionalShape.cpp
        Circle.h
        Circle.cpp
        Square.h
        Rectangle.h)
