cmake_minimum_required(VERSION 3.17)
project(HW6)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW6 random-map.cpp cmake-build-debug/RandomBetween.cpp cmake-build-debug/RandomBetween.h)