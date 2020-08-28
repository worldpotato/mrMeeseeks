cmake_minimum_required (VERSION 3.5)

project(mrMeeseeks-go)

add_compile_options(-lpthread -Wall -Werror)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(lib/mrMeeseeks)

add_executable (mrMeeseeks-go main.cpp)

target_link_libraries(mrMeeseeks-go mrMeeseeks)

add_custom_command(TARGET mrMeeseeks-go POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/compile_commands.json
    ${PROJECT_SOURCE_DIR}/compile_commands.json
 )

 add_custom_command(TARGET mrMeeseeks-go POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/mrMeeseeks-go
    ${PROJECT_SOURCE_DIR}/bin/mrMeeseeks-go
 )
