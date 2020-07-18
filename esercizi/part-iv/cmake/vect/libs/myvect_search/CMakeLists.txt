add_library(MyVectSearch STATIC myvect_search.c)

target_include_directories(MyVectSearch PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
