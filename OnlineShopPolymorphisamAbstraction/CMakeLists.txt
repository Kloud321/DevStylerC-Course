cmake_minimum_required(VERSION 3.27)
project(OnlineShopPolymorphisamAbstraction)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineShopPolymorphisamAbstraction main.cpp
        Drinks.h
        Alcoholic.h
        NonAlcoholic.h
        TypeEnum.h
        Drinks.cpp
        TypeEnum.cpp
        NonAlcoholic.cpp
        Alcoholic.cpp
        Orders.h
        User.h
        Orders.cpp
        User.cpp)
