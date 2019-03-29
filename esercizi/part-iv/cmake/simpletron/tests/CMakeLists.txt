FIND_PATH(CUNIT_INCLUDE_DIR NAMES CUnit/Basic.h)
FIND_LIBRARY(CUNIT_LIBRARY NAMES cunit)

add_executable(testMemory testMemory.c)
target_link_libraries(testMemory PRIVATE Memory ${CUNIT_LIBRARY})

# add_test(testName Exename arg1 arg2 ...)
add_test(testMemory ${EXECUTABLE_OUTPUT_PATH}/testMemory --verbose)
