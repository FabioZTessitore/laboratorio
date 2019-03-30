cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(Radice C)

add_executable(Radice radice.c)

# ricarca della libreria matematica
find_library(M_LIB m)

# link della libreria matematica (m) al
# target Radice creato precedentemente.
#
# La libreria e' inclusa mediante parola chiave PRIVATE.
# PRIVATE collega la libreria ma non la rende parte dell'interfaccia.
# Al contrario, PUBLIC collega la libreria e la rende parte dell'interfaccia.
# INTERFACE, invece, non collega la libreria, ma la aggiunge all'interfaccia.
target_link_libraries(Radice PRIVATE ${M_LIB})
