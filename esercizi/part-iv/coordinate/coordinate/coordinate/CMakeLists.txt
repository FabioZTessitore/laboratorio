add_library(Coordinate STATIC coordinate.c)
target_include_directories(Coordinate PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))

target_link_libraries(Coordinate PUBLIC Latitudine Longitudine)
