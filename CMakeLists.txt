cmake_minimum_required(VERSION 4.3)
project(OOP1)

set(CMAKE_CXX_STANDARD 14)

include_directories(ClassWork/Lesson1)

add_executable(Main
        ClassWork/Lesson1/Main.cpp
        ClassWork/Lesson1/Main.h)

add_executable(Hello
        ClassWork/Lesson1/Hello.cpp
        ClassWork/Lesson1/Hello.h)