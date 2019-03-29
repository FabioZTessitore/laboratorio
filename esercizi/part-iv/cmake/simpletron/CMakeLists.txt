cmake_minimum_required(VERSION 3.12)

project(TheSimpletron)

add_subdirectory(libs)

add_executable(TheSimpletron main.c)
target_link_libraries(TheSimpletron PRIVATE Simpletron Cpu Memory)

# enable make test
enable_testing()
add_subdirectory(tests)
