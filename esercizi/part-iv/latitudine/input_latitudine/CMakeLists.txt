cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(InputLatitudine C)

add_subdirectory(latitudine)

add_executable(InputLatitudine main.c)
target_link_libraries(InputLatitudine PRIVATE Latitudine)

enable_testing()
add_subdirectory(tests)
