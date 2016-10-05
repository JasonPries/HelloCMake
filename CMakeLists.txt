cmake_minimum_required(VERSION 2.8)
project(HelloCMake)

add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "-g -O0 --coverage")

set(SOURCE_FILES main.cpp)

add_executable(HelloCMake ${SOURCE_FILES})