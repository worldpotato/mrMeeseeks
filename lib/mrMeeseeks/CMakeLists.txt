cmake_minimum_required(VERSION 3.18)
project(mrMeeseeks)

set(CMAKE_BUILD_TYPE Debug)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -Wall -Werror -std=c++17")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(mrMeeseeks SHARED
    src/mrMeeseeks.cpp
)

target_include_directories(mrMeeseeks PUBLIC include)

