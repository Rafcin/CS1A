cmake_minimum_required(VERSION 3.14)
project(CLion)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLion main.cpp HW/avg.cpp HW/r_utils.cpp LAB/lab_01.cpp HW/hw_02.cpp)