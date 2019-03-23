add_library(MyVectSort myvect_sort.c)
target_include_directories(MyVectSort PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
target_link_libraries(MyVectSort PRIVATE MyVectMath)
