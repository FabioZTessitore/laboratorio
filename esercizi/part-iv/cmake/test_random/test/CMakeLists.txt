include(FindCUnit.cmake)

add_executable(testRandom test.c)
target_link_libraries(testRandom PRIVATE Random ${CUNIT_LIBRARIES})

# add_test(testName Exename arg1 arg2 ...)
add_test(testRandom testRandom)
