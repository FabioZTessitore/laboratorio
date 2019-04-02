add_library(Memory OBJECT memory.c)
target_include_directories(Memory PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
