cmake_minimum_required(VERSION 3.22)

set(projname "Final_Exam")

project(${projname})

set(CMAKE_CXX_STANDARD 14)

add_executable(${projname} main.cpp Shape.h Rectangle.cpp Rectangle.h Square.cpp Square.h)
