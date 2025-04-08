cmake_minimum_required(VERSION 3.14)
project(PR3_3_B)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../PR3_3_B/lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR3_3_B
        classes/Fraction.h
        classes/Fraction.cpp
        classes/Pair.h
        classes/Pair.cpp
        main.cpp
)

target_link_libraries(PR3_3_B)

add_executable(PR3_3_B_tests
        classes/Fraction.h
        classes/Fraction.cpp
        classes/Pair.h
        classes/Pair.cpp
        tests/tests.cpp
)

target_link_libraries(PR3_3_B_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR3_3_B_tests)
