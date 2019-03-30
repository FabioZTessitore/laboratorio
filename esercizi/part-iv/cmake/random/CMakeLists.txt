cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_C_FLAGS "-Wall -ansi -pedantic")

project(RandomNumber C)

# aggiunge l'unica sottodirectory del progetto
add_subdirectory(random)

# crea il target RandomNumber
add_executable(RandomNumber main.c)

# collega l'oggetto Random (target creato nella sottodirectory random)
# al target RandomNumber
target_link_libraries(RandomNumber PRIVATE Random)
