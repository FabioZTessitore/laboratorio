# - FindCUnit
# Find the CUnit unit testing framework
# The module defines
#   CUNIT_INCLUDE_DIR, Where to find CUnit.h, etc.
#   CUNIT_LIBRARIES, the libraries needed to use CUnit.
#   CUNIT_FOUND, If false, do not try to use CUnit.
# also defined, but not for general use are
#   CUNIT_LIBRARY, where to find the CUnit library.

FIND_PATH(CUNIT_INCLUDE_DIR CUnit/CUnit.h)

SET(CUNIT_NAMES ${CUNIT_NAMES} cunit libcunit_dll libcunit)
FIND_LIBRARY(CUNIT_LIBRARY NAMES ${CUNIT_NAMES} )

# Handle QUIETLY and REQUIRED arguments and set CUNIT_FOUND to true if
# all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS("CUnit" DEFAULT_MSG CUNIT_LIBRARY CUNIT_INCLUDE_DIR)

IF(CUNIT_FOUND)
  SET(CUNIT_LIBRARIES ${CUNIT_LIBRARY})
ENDIF(CUNIT_FOUND)

MARK_AS_ADVANCED(CUNIT_LIBRARY)
