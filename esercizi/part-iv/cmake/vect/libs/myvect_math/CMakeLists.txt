add_library(MyVectMath STATIC myvect_math.c)

target_include_directories(MyVectMath PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
