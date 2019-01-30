#include "CUnit/Basic.h"
#include "random.h"

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make test
 * $ ./test
 */

/* crea una suite di test per il modulo random */

/* funzione di init della suite */
int suite_random_init()
{
  random_init();

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_random_cleanup()
{
  /* nothing to do */

  return 0; /* success */
}

/* funzioni test per la suite 'Random' */
void test_randomBetween()
{
  int i;
  int n;

  CU_ASSERT_EQUAL(random_between(1, 0), 1);
  CU_ASSERT_EQUAL(random_between(3, 3), 3);

  for (i = 0; i < 1000; i++) {
    CU_ASSERT_EQUAL(random_between(3, 4), 3);
  }

  for (i = 0; i < 1000; i++) {
    n = random_between(1, 10);
    CU_ASSERT(n >= 1 && n < 10);
  }

  for (i = 0; i < 1000; i++) {
    n = random_between(-10, -1);
    CU_ASSERT(n >= -10 && n < -1);
  }
}


int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Random Between", suite_random_init, suite_random_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test random between", test_randomBetween)))
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
