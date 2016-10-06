project(tests)

add_subdirectory(gtest)

add_executable(run_tests main.cpp)

target_link_libraries(run_tests gtest gtest_main)