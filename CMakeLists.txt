cmake_minimum_required(VERSION 3.8)
project(Light_DES)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp bin_test.cpp bin_test.h)
add_executable(Light_DES ${SOURCE_FILES})