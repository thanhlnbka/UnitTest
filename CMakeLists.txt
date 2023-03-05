
cmake_minimum_required(VERSION 3.10)

project(MyProject)

find_package(GTest REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(test unitT.cpp my_code.cpp)

target_link_libraries(test GTest::GTest GTest::Main)