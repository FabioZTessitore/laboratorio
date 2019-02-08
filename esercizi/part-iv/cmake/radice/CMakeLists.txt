cmake_minimum_required(VERSION 3.12)

project(Radice)

add_executable(Radice radice.c)
target_link_libraries(Radice PRIVATE m)
