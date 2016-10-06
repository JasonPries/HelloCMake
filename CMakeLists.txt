cmake_minimum_required(VERSION 2.8)
project(HelloCMake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "-g -O0 --coverage")

add_subdirectory(lib)
add_subdirectory(test)

set(SOURCE_FILES main.cpp)

add_executable(HelloCMake ${SOURCE_FILES})

target_link_libraries(HelloCMake Line)