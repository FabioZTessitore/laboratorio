add_library(Memory STATIC memory.c)
target_include_directories(Memory PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
