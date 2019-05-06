add_library(DiffLatitudine STATIC diff_latitudine.c)
target_include_directories(DiffLatitudine PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))

target_link_libraries(DiffLatitudine PRIVATE Latitudine CoordinataGenerica)
