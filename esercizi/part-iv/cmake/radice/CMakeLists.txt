cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(Radice C)

# ricerca della libreria matematica
find_library(M_LIB m)

add_executable(Radice radice.c)

# link della libreria matematica (m) al
# target Radice creato precedentemente.
#
# La libreria e' inclusa mediante parola chiave PRIVATE.
# PRIVATE collega la libreria ma non la rende parte dell'interfaccia.
target_link_libraries(Radice PRIVATE ${M_LIB})
