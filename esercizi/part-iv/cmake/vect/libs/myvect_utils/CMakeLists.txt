add_library(MyVectUtils STATIC myvect_utils.c)

target_include_directories(MyVectUtils PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))