cmake_minimum_required(VERSION 2.6)

project(Radice)

set(CMAKE_VERBOSE_MAKEFILE off)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

add_executable(Radice radice.c)
target_link_libraries(Radice m)
