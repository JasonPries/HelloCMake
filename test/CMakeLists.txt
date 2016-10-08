project(tests)

add_subdirectory(gtest)

add_executable(run_tests main.cpp test_Line.cpp)

target_link_libraries(run_tests gtest gtest_main Line)