add_library(Latitudine STATIC latitudine.c)

target_include_directories(Latitudine PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
