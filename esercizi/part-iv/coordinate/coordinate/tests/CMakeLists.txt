include(FindCUnit.cmake)

add_executable(testLatitudine testLatitudine.c)
target_link_libraries(testLatitudine PRIVATE Latitudine ${CUNIT_LIBRARIES})

add_test(testLatitudine testLatitudine)


add_executable(testDiffLatitudine testDiffLatitudine.c)
target_link_libraries(testDiffLatitudine PRIVATE Latitudine DiffLatitudine ${CUNIT_LIBRARIES})

add_test(testDiffLatitudine testDiffLatitudine)
