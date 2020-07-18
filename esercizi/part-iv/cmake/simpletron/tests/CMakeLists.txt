include(FindCUnit.cmake)

add_executable(testMemory testMemory.c)
target_link_libraries(testMemory PRIVATE Memory ${CUNIT_LIBRARIES})
# add_test(testName Exename arg1 arg2 ...)
add_test(testMemory testMemory)

add_executable(testCpu testCpu.c)
target_link_libraries(testCpu PRIVATE Cpu Memory ${CUNIT_LIBRARIES})
add_test(testCpu testCpu)