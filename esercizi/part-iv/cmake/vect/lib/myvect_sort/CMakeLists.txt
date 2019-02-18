add_library(MyVectSort myvect_sort.c)
target_include_directories(MyVectSort PRIVATE .)
target_include_directories(MyVectSort PRIVATE ../myvect_math)
target_link_libraries(MyVectSort PRIVATE MyVectMath)
