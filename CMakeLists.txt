cmake_minimum_required(VERSION 3.6)
project(HW_6_Volums_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ThreeD_Figure.h Sphere.cpp Sphere.h Parallelepiped.cpp Parallelepiped.h)
add_executable(HW_6_Volums_ ${SOURCE_FILES})