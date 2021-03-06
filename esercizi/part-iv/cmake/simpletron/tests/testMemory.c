#include "CUnit/Basic.h"
#include "memory.h"

/* crea una suite di test per il modulo Memory */


/* funzione di init della suite */
int suite_memory_init(void)
{
  /* nothing to do */

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_memory_cleanup(void)
{
  /* nothing to do */

  return 0; /* success */
}

/* funzioni test per la suite 'Memory' */
void test_zeros(void)
{
  Memory m = memory_make();
  int i;

  for (i = 0; i < MEMORY_SIZE; i++) {
    CU_ASSERT_EQUAL(memory_get(&m, i), 0);
  }
}

void test_ones(void)
{
  Memory m = memory_make();
  int i;

  for (i = 0; i < MEMORY_SIZE; i++) {
    memory_set(&m, i, 1);
  }

  for (i = 0; i < MEMORY_SIZE; i++) {
    CU_ASSERT_EQUAL(memory_get(&m, i), 1);
  }
}

void test_memory(void)
{
  Memory m = memory_make();
  int i;

  for (i = 0; i < MEMORY_SIZE; i++) {
    memory_set(&m, i, i);
  }

  for (i = 0; i < MEMORY_SIZE; i++) {
    CU_ASSERT_EQUAL(memory_get(&m, i), i);
  }
}


int main(void)
{
  CU_pSuite pSuite = NULL;
  int exit_value = 0;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Memory", suite_memory_init, suite_memory_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test zeros", test_zeros)) ||
    (NULL == CU_add_test(pSuite, "test ones", test_ones)) ||
    (NULL == CU_add_test(pSuite, "test memory", test_memory)))
  {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* esegue i test */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  
  exit_value = CU_get_number_of_failures();

  CU_cleanup_registry();

  return exit_value;
}
