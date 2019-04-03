add_library(Simpletron STATIC simpletron.c)
target_link_libraries(Simpletron PUBLIC Memory Cpu)

target_include_directories(Simpletron PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
