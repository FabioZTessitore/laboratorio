cmake_minimum_required(VERSION 3.12)

project(Number)

add_subdirectory(random)

add_executable(Number main.c)
target_include_directories(Number PRIVATE random)
target_link_libraries(Number PRIVATE Random)
