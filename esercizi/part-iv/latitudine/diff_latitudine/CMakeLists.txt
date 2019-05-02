cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(DiffLat C)

add_subdirectory(diff_latitudine)
add_subdirectory(latitudine)
add_subdirectory(str_utils)

add_executable(DiffLat main.c)
target_link_libraries(DiffLat PRIVATE DiffLatitudine Latitudine StrUtils)

enable_testing()
add_subdirectory(tests)
