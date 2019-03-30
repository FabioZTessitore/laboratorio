cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(Vettori C)

# aggiunge un'unica sottodirectory con tutti i moduli
add_subdirectory(libs)

# crea il target
add_executable(Vettori main.c)

# link dei moduli
target_link_libraries(Vettori PRIVATE MyVect)
target_link_libraries(Vettori PRIVATE MyVectMath)
target_link_libraries(Vettori PRIVATE MyVectSearch)
target_link_libraries(Vettori PRIVATE MyVectSort)
target_link_libraries(Vettori PRIVATE MyVectUtils)
target_link_libraries(Vettori PRIVATE Random)
