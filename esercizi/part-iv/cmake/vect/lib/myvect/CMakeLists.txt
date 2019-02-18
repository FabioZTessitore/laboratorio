add_library(MyVect myvect.c)
target_include_directories(MyVect PRIVATE .)
target_include_directories(MyVect PRIVATE ../random)
target_link_libraries(MyVect PRIVATE Random)
