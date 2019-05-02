#include "CUnit/Basic.h"
#include "longitudine.h"

/* crea una suite di test per il modulo Longitudine */


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
  Longitudine l = longitudine_make(5, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 5);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 15);
  CU_ASSERT_EQUAL(l.segno, 1);

  /* tutti fuori range */
  l = longitudine_make(-5, -10, -15, -1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* gradi > 180 */
  l = longitudine_make(200, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* primi > 59 */
  l = longitudine_make(50, 100, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* secondi > 59 */
  l = longitudine_make(50, 10, 100, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* gradi < 0 */
  l = longitudine_make(-5, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* primi < 0 */
  l = longitudine_make(50, -10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* secondi < 0 */
  l = longitudine_make(50, 10, -10, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* oltre 180 gradi */
  l = longitudine_make(180, 1, 1, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);
}

void test_parse_bad()
{
  char *inputs[] = {
    "", "\n", "a", "N40 10 20E", "4a", "40", "40 10 a 05 W", "40 10 a E", "191E", "70 110 21 W", NULL
  };
  Longitudine l;
  int status;

  char **current = inputs;
  while (*current != NULL) {
    status = longitudine_parse(&l, *current);

    CU_ASSERT_EQUAL(status, -1);

    ++current;
  }
}

void test_parse()
{
  char *input_1 = "40E";
  char *input_2 = "40 E";
  char *input_3 = "  40 W";
  char *input_4 = "40 10W";
  char *input_5 = "40 10 05E";

  Longitudine l;
  int status;

  status = longitudine_parse(&l, input_1);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 1);

  status = longitudine_parse(&l, input_2);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 1);

  status = longitudine_parse(&l, input_3);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, -1);

  status = longitudine_parse(&l, input_4);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, -1);

  status = longitudine_parse(&l, input_5);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 5);
  CU_ASSERT_EQUAL(l.segno, 1);
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
  if ((NULL == CU_add_test(pSuite, "test make longitudine", test_make)) ||
    (NULL == CU_add_test(pSuite, "test parse bad", test_parse_bad)) ||
    (NULL == CU_add_test(pSuite, "test parse", test_parse)))
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
