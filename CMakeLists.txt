cmake_minimum_required(VERSION 3.23)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp cmake-build-debug/Routes.cpp AirportCpp.cpp)

add_executable(Routes cmake-build-debug/Routes.cpp cmake-build-debug/Dummy.h)
add_executable(Dummy cmake-build-debug/Dummy.h)
add_executable(main main.cpp)