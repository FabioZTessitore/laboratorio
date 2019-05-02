include(FindCUnit.cmake)

add_executable(testLatitudine testLatitudine.c)
target_link_libraries(testLatitudine PRIVATE Latitudine ${CUNIT_LIBRARIES})

add_test(testLatitudine testLatitudine)
