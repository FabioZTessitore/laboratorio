#include "CUnit/Basic.h"
#include "diff_longitudine.h"
#include "longitudine.h"

/* crea una suite di test per il modulo DiffLongitudine */


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
  Longitudine long1 = longitudine_make(70, 0, 0, 1);
  Longitudine long2 = longitudine_make(110, 0, 0, 1);
  DiffLongitudine dlong = diff_longitudine(&long1, &long2);
  CU_ASSERT_EQUAL(dlong.gradi, 40);
  CU_ASSERT_EQUAL(dlong.primi, 0);
  CU_ASSERT_EQUAL(dlong.secondi, 0);
  CU_ASSERT_EQUAL(dlong.segno, 1);

  long1 = longitudine_make(82, 0, 0, 1);
  long2 = longitudine_make(73, 0, 0, 1);
  dlong = diff_longitudine(&long1, &long2);
  CU_ASSERT_EQUAL(dlong.gradi, 9);
  CU_ASSERT_EQUAL(dlong.primi, 0);
  CU_ASSERT_EQUAL(dlong.secondi, 0);
  CU_ASSERT_EQUAL(dlong.segno, -1);

  long1 = longitudine_make(60, 20, 0, 1);
  long2 = longitudine_make(95, 30, 0, 1);
  dlong = diff_longitudine(&long1, &long2);
  CU_ASSERT_EQUAL(dlong.gradi, 35);
  CU_ASSERT_EQUAL(dlong.primi, 10);
  CU_ASSERT_EQUAL(dlong.secondi, 0);
  CU_ASSERT_EQUAL(dlong.segno, 1);

  long1 = longitudine_make(170, 30, 0, 1);
  long2 = longitudine_make(100, 50, 0, -1);
  dlong = diff_longitudine(&long1, &long2);
  CU_ASSERT_EQUAL(dlong.gradi, 88);
  CU_ASSERT_EQUAL(dlong.primi, 40);
  CU_ASSERT_EQUAL(dlong.secondi, 0);
  CU_ASSERT_EQUAL(dlong.segno, 1);

  long1 = longitudine_make(24, 7, 13, -1);
  long2 = longitudine_make(20, 52, 57, -1);
  dlong = diff_longitudine(&long1, &long2);
  CU_ASSERT_EQUAL(dlong.gradi, 3);
  CU_ASSERT_EQUAL(dlong.primi, 14);
  CU_ASSERT_EQUAL(dlong.secondi, 16);
  CU_ASSERT_EQUAL(dlong.segno, 1);
}

int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Longitudine", suite_init, suite_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test diff Longitudine", test)))
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
