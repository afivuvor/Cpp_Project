cmake_minimum_required(VERSION 3.23)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp Routes.cpp cmake-build-debug/test.cpp)

add_executable(Airlines cmake-build-debug/Airlines.cpp)