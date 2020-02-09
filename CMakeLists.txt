cmake_minimum_required(VERSION 3.8)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(meta)

file(GLOB_RECURSE src_list "*.hpp" "*.cpp")

add_executable(${PROJECT_NAME} ${src_list})
