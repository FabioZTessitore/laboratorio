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
void test_randomBetween_bad_max()
{
  CU_ASSERT_EQUAL(random_between(1, 0), 1);
}

void test_randomBetween_max_eq_min()
{
  CU_ASSERT_EQUAL(random_between(3, 3), 3);
}

void test_randomBetween_max_gt_one_min()
{
  int i;
  const int N = 1000;

  for (i = 0; i < N; i++) {
    CU_ASSERT_EQUAL(random_between(3, 4), 3);
  }
}

void test_randomBetween_positive()
{
  int i;
  int r;
  const int N = 1000;

  for (i = 0; i < N; i++) {
    r = random_between(1, 10);
    CU_ASSERT(r >= 1 && r < 10);
  }
}

void test_randomBetween_negative()
{
  int i;
  int r;
  const int N = 1000;

  for (i = 0; i < N; i++) {
    r = random_between(-10, -1);
    CU_ASSERT(r >= -10 && r < -1);
  }
}


int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Random", suite_random_init, suite_random_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test random between: bad max", test_randomBetween_bad_max)) ||
    (NULL == CU_add_test(pSuite, "test random between: max == min", test_randomBetween_max_eq_min)) ||
    (NULL == CU_add_test(pSuite, "test random between: max == min+1", test_randomBetween_max_gt_one_min)) ||
    (NULL == CU_add_test(pSuite, "test random between: positive", test_randomBetween_positive)) ||
    (NULL == CU_add_test(pSuite, "test random between: negative", test_randomBetween_negative)))
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
