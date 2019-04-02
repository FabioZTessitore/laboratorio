add_library(Cpu STATIC cpu.c)
target_include_directories(Cpu PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
target_link_libraries(Cpu PRIVATE Memory)
