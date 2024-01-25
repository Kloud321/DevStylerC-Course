cmake_minimum_required(VERSION 3.27)
project(Account_Polymorphisam_task)

set(CMAKE_CXX_STANDARD 17)

add_executable(Account_Polymorphisam_task main.cpp
        CheckingAccount.h
        Account.cpp
        CheckingAccaount.cpp
        SavingAccount.cpp)
