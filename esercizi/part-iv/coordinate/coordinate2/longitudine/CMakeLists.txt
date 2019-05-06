add_library(Longitudine STATIC longitudine.c)
target_include_directories(Longitudine PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))

target_link_libraries(Longitudine PUBLIC CoordinataGenerica)
