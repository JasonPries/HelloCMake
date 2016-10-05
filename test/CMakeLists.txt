project(tests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "-g -O0 --coverage")

add_subdirectory(gtest)

add_executable(run_tests main.cpp)

target_link_libraries(run_tests gtest gtest_main)