add_library(Random STATIC random.c)

target_include_directories(Random PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
