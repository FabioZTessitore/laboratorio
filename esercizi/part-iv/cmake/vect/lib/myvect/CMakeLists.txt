add_library(MyVect myvect.c)
target_include_directories(MyVect PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
target_link_libraries(MyVect PRIVATE Random)
