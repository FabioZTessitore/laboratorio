cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(TheSimpletron C)

add_subdirectory(libs)

add_executable(TheSimpletron main.c)
target_link_libraries(TheSimpletron PRIVATE Simpletron)

# enable make test
enable_testing()
add_subdirectory(tests)
