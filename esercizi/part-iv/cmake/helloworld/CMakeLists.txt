cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(Hello C)

add_executable(Hello hello.c)
