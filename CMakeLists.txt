cmake_minimum_required(VERSION 3.29)
project(OOP_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OOP_cpp
    Student.cpp
    Student.h
    StudentGrades.cpp)
