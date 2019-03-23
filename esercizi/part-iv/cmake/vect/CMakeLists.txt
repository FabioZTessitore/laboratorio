cmake_minimum_required(VERSION 3.12)

project(Vettori)

add_subdirectory(lib)

add_executable(Vettori main.c)
target_link_libraries(Vettori PRIVATE MyVect)
target_link_libraries(Vettori PRIVATE MyVectMath)
target_link_libraries(Vettori PRIVATE MyVectSearch)
target_link_libraries(Vettori PRIVATE MyVectSort)
target_link_libraries(Vettori PRIVATE MyVectUtils)
