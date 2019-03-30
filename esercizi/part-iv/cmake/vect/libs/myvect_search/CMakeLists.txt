add_library(MyVectSearch OBJECT myvect_search.c)
target_include_directories(MyVectSearch PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
