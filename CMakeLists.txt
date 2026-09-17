cmake_minimum_required(VERSION 4.3)
project(OOP1)

set(CMAKE_CXX_STANDARD 14)

include_directories(ClassWork/Lesson1)

add_executable(OOP1
        ClassWork/Lesson1/Main.cpp
        ClassWork/Lesson1/Main.h)
