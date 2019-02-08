cmake_minimum_required(VERSION 2.6)

project(Hello)

set(CMAKE_VERBOSE_MAKEFILE off)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

add_executable(Hello hello.c)
