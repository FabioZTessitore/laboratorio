include(FindCUnit.cmake)

add_executable(testLatitudine testLatitudine.c)
target_link_libraries(testLatitudine PRIVATE Latitudine ${CUNIT_LIBRARIES})
add_test(testLatitudine testLatitudine)


add_executable(testLongitudine testLongitudine.c)
target_link_libraries(testLongitudine PRIVATE Longitudine ${CUNIT_LIBRARIES})
add_test(testLongitudine testLongitudine)


add_executable(testDiffLatitudine testDiffLatitudine.c)
target_link_libraries(testDiffLatitudine PRIVATE Latitudine DiffLatitudine ${CUNIT_LIBRARIES})
add_test(testDiffLatitudine testDiffLatitudine)


add_executable(testDiffLongitudine testDiffLongitudine.c)
target_link_libraries(testDiffLongitudine PRIVATE Longitudine DiffLongitudine ${CUNIT_LIBRARIES})
add_test(testDiffLongitudine testDiffLongitudine)
