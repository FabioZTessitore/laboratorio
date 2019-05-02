#include "CUnit/Basic.h"
#include "diff_latitudine.h"
#include "latitudine.h"

/* crea una suite di test per il modulo DiffLatitudine */


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

void test()
{
  Latitudine lat1 = latitudine_make(60, 0, 0, 1);
  Latitudine lat2 = latitudine_make(70, 0, 0, 1);
  DiffLatitudine dlat = diff_latitudine(&lat1, &lat2);
  CU_ASSERT_EQUAL(dlat.gradi, 10);
  CU_ASSERT_EQUAL(dlat.primi, 0);
  CU_ASSERT_EQUAL(dlat.secondi, 0);
  CU_ASSERT_EQUAL(dlat.segno, 1);

  lat1 = latitudine_make(58, 0, 0, 1);
  lat2 = latitudine_make(39, 0, 0, 1);
  dlat = diff_latitudine(&lat1, &lat2);
  CU_ASSERT_EQUAL(dlat.gradi, 19);
  CU_ASSERT_EQUAL(dlat.primi, 0);
  CU_ASSERT_EQUAL(dlat.secondi, 0);
  CU_ASSERT_EQUAL(dlat.segno, -1);

  lat1 = latitudine_make(48, 20, 0, -1);
  lat2 = latitudine_make(76, 40, 0, -1);
  dlat = diff_latitudine(&lat1, &lat2);
  CU_ASSERT_EQUAL(dlat.gradi, 28);
  CU_ASSERT_EQUAL(dlat.primi, 20);
  CU_ASSERT_EQUAL(dlat.secondi, 0);
  CU_ASSERT_EQUAL(dlat.segno, -1);

  lat1 = latitudine_make(65, 32, 20, -1);
  lat2 = latitudine_make(81, 52, 20, -1);
  dlat = diff_latitudine(&lat1, &lat2);
  CU_ASSERT_EQUAL(dlat.gradi, 16);
  CU_ASSERT_EQUAL(dlat.primi, 20);
  CU_ASSERT_EQUAL(dlat.secondi, 0);
  CU_ASSERT_EQUAL(dlat.segno, -1);
}

int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Latitudine", suite_init, suite_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test diff latitudine", test)))
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
