cmake_minimum_required(VERSION 3.16)
project(cxx_sample_calculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cxx_sample_calculator
        Calculator.cpp
        Calculator.h
        main.cpp
        Menu.cpp
        Menu.h)
