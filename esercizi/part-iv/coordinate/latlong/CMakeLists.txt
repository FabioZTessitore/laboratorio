cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(LatLong C)

add_subdirectory(diff_latitudine)
add_subdirectory(diff_longitudine)
add_subdirectory(latitudine)
add_subdirectory(longitudine)
add_subdirectory(str_utils)

add_executable(LatLong main.c)
target_link_libraries(LatLong PRIVATE DiffLatitudine Latitudine DiffLongitudine Longitudine StrUtils)

enable_testing()
add_subdirectory(tests)
