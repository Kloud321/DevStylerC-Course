cmake_minimum_required(VERSION 3.27)
project(CardShuffle)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CardShuffle
        Deck.cpp
        Deck.h
        Card.cpp
        Card.h
        main.cpp)
