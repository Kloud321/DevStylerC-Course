cmake_minimum_required(VERSION 3.27)
project(FootboolFederation)

set(CMAKE_CXX_STANDARD 17)

add_executable(FootboolFederation main.cpp
        User.h
        Administration.h
        Refer.h
        FanBase.h
        User.cpp
        Refer.cpp
        FanBase.cpp
        Administration.cpp
        Team.h
        Schedule.h
        Team.cpp
        Schedule.cpp
)
