#include "CUnit/Basic.h"
#include "coordinate.h"
#include "latitudine.h"
#include "longitudine.h"

/* crea una suite di test per il modulo Coordinate */

/* funzione di init della suite */
int suite_init()
{
  /* nothing to do */

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_cleanup()
{
  /* nothing to do */

  return 0; /* success */
}

void test_make()
{
  /* ok */
  Latitudine phi = latitudine_make(5, 10, 15, 1);
  Longitudine lambda = longitudine_make(14, 10, 5, 1);
  Coordinate coords = coordinate_make(&phi, &lambda);

  CU_ASSERT_EQUAL(coords.phi.gradi, phi.gradi);
  CU_ASSERT_EQUAL(coords.phi.primi, phi.primi);
  CU_ASSERT_EQUAL(coords.phi.secondi, phi.secondi);
  CU_ASSERT_EQUAL(coords.phi.segno, phi.segno);

  CU_ASSERT_EQUAL(coords.lambda.gradi, lambda.gradi);
  CU_ASSERT_EQUAL(coords.lambda.primi, lambda.primi);
  CU_ASSERT_EQUAL(coords.lambda.secondi, lambda.secondi);
  CU_ASSERT_EQUAL(coords.lambda.segno, lambda.segno);
}

int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Coordinate", suite_init, suite_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test make", test_make)))
  {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* esegue i test */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();

  return CU_get_error();
}
