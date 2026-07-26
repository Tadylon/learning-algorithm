cmake_minimum_required(VERSION 3.20)

project(Algorithm CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Algorithm 
    # leetcode/array/the_max_multply.cpp
    # leetcode/dp/climb_stairs.cpp
    # leetcode/hash/two_num_add.cpp
    leetcode/hash/string_divide.cpp
)

target_include_directories(Algorithm PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)