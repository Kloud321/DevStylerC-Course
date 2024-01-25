cmake_minimum_required(VERSION 3.27)
project(LuibraryBookManagment)

set(CMAKE_CXX_STANDARD 17)

add_executable(LuibraryBookManagment main.cpp
        LibraryManagment.h
        Book.h
        RegularBook.h
        ReferenceBook.h
        ReferenceBook.h
        Book.cpp
        LibraryManagment.cpp
        ReferenceBook.cpp
        RegularBook.cpp
        Genre.h
        Genre.h
        Author.cpp
        Genre.cpp)
