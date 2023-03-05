
cmake_minimum_required(VERSION 3.10)

project(MyProject)

find_package(GTest REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(test my_code.cpp my_code.h unitT.cpp)

target_link_libraries(test GTest::GTest GTest::Main)