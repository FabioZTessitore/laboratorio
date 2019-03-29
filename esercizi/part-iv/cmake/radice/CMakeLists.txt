cmake_minimum_required(VERSION 3.12)

project(Radice)

add_executable(Radice radice.c)

# link della libreria matematica (m) al
# target Radice creato precedentemente.
#
# La libreria e' inclusa mediante parola chiave PRIVATE.
# PRIVATE collega la libreria ma non la rende parte dell'interfaccia.
# Al contrario, PUBLIC collega la libreria e la rende parte dell'interfaccia.
# INTERFACE, invece, non collega la libreria, ma la aggiunge all'interfaccia.
target_link_libraries(Radice PRIVATE m)
