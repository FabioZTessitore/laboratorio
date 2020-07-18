add_library(StrUtils STATIC str_utils.c)

target_include_directories(StrUtils PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
