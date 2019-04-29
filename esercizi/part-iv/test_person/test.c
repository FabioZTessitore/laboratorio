#include "CUnit/Basic.h"
#include "person.h"

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make test
 * $ ./test
 */

/* crea una suite di test per il modulo Person */

/* funzione di init della suite */
int suite_person_init()
{
  /* nothing to do */

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_person_cleanup()
{
  /* nothing to do */

  return 0; /* success */
}

/* funzioni test per la suite 'Person' */
void test_Person_empty()
{
  Person p = person_make("", "");

  CU_ASSERT_STRING_EQUAL(p.firstName, "");
  CU_ASSERT_STRING_EQUAL(p.lastName, "");
}

void test_Person()
{
  Person p = person_make("Mario", "Rossi");

  CU_ASSERT_STRING_EQUAL(p.firstName, "Mario");
  CU_ASSERT_STRING_EQUAL(p.lastName, "Rossi");
}


int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Person", suite_person_init, suite_person_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test person first and last name empty", test_Person_empty)) ||
    (NULL == CU_add_test(pSuite, "test person first and last name", test_Person)))
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
