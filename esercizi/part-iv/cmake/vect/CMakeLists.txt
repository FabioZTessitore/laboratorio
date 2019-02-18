cmake_minimum_required(VERSION 3.12)

project(Vettori)

add_subdirectory(lib)

add_executable(Vettori main.c)
target_include_directories(Vettori PRIVATE lib/myvect)
target_link_libraries(Vettori PRIVATE MyVect)

target_link_libraries(Vettori PRIVATE MyVectMath)
target_include_directories(Vettori PRIVATE lib/myvect_math)

target_link_libraries(Vettori PRIVATE MyVectSearch)
target_include_directories(Vettori PRIVATE lib/myvect_search)

target_link_libraries(Vettori PRIVATE MyVectSort)
target_include_directories(Vettori PRIVATE lib/myvect_sort)

target_link_libraries(Vettori PRIVATE MyVectUtils)
target_include_directories(Vettori PRIVATE lib/myvect_utils)
