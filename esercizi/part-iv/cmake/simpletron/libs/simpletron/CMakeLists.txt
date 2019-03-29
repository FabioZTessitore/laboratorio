add_library(Simpletron simpletron.c)
target_include_directories(Simpletron PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
target_link_libraries(Simpletron PRIVATE Memory Cpu)
