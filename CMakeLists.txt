project(lonlat)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# vscode debug mode
set(CMAKE_BUILD_TYPE Debug)

add_executable(lonlat main.cpp utm.cpp)