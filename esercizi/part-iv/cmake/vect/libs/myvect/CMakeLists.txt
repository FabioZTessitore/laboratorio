# MyVect crea una libreria STATIC e non un OBJECT
# perche' cosi' possiamo collegare il modulo RANDOM
# e non portare la dipendenza nel main
add_library(MyVect STATIC myvect.c)

target_include_directories(MyVect PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))

target_link_libraries(MyVect PRIVATE Random)
