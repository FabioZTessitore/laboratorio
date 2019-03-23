FIND_PATH(CUNIT_INCLUDE_DIR NAMES CUnit/Basic.h)
FIND_LIBRARY(CUNIT_LIBRARY NAMES cunit)

add_executable(testNumber test.c)
target_link_libraries(testNumber PRIVATE Random ${CUNIT_LIBRARY})

# add_test(testName Exename arg1 arg2 ...)
add_test(testNumber testNumber)
