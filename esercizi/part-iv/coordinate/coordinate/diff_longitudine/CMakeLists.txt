add_library(DiffLongitudine OBJECT diff_longitudine.c)
target_include_directories(DiffLongitudine PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))

target_link_libraries(DiffLongitudine PRIVATE Longitudine)
