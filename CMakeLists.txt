cmake_minimum_required(VERSION 3.0.0)
project(CS100_Lab2 VERSION 2.0.0)

add_subdirectory(${CMAKE_BINARY_DIR}/../googletest)

# equivalent to adding a -std=c++11 flag to your g++ compilation
set(CMAKE_CXX_STANDARD 11)

add_executable(hello_world 
    src/main1.cpp
)

add_executable(area_calculator 
    src/main2.cpp 
    src/rectangle.cpp
)

add_executable(standard_area_calculator 
    src/main3.cpp 
    src/rectangle.cpp
)

add_executable(c-echo
    src/main_test.cpp
)

add_executable(lab2_tests
    src/test.cpp
)

TARGET_LINK_LIBRARIES(lab2_tests gtest)
TARGET_COMPILE_DEFINITIONS(lab2_tests PUBLIC gtest_disable_pthreads=ON)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
