cmake_minimum_required(VERSION 3.12)

project(Number)

add_subdirectory(random)

add_executable(Number main.c)
target_link_libraries(Number PRIVATE Random)

# enable make test
enable_testing()
add_subdirectory(tests)
