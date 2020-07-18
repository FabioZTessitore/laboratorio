cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(Number C)

add_subdirectory(random)

add_executable(Number main.c)
target_link_libraries(Number PRIVATE Random)

# enable make test
enable_testing()
add_subdirectory(test)
