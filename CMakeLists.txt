cmake_minimum_required(VERSION 2.8)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(meta)
add_executable(${PROJECT_NAME} "main.cpp")

file(GLOB_RECURSE src_list "*.hpp" "*.cpp")
