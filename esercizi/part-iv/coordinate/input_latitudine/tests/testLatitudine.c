#include "CUnit/Basic.h"
#include "latitudine.h"

/* crea una suite di test per il modulo Latitudine */

/* funzione di init della suite */
int suite_init(void)
{
  /* nothing to do */

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_cleanup(void)
{
  /* nothing to do */

  return 0; /* success */
}

void test_make(void)
{
  /* ok */
  Latitudine l = latitudine_make(5, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 5);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 15);
  CU_ASSERT_EQUAL(l.segno, 1);

  /* tutti fuori range */
  l = latitudine_make(-5, -10, -15, -1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* gradi > 90 */
  l = latitudine_make(95, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* primi > 59 */
  l = latitudine_make(50, 100, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* secondi > 59 */
  l = latitudine_make(50, 10, 100, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* gradi < 0 */
  l = latitudine_make(-5, 10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* primi < 0 */
  l = latitudine_make(50, -10, 15, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* secondi < 0 */
  l = latitudine_make(50, 10, -10, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);

  /* 90 gradi piu' qualcosa */
  l = latitudine_make(90, 1, 1, 1);
  CU_ASSERT_EQUAL(l.gradi, 0);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 0);
}

void test_parse_bad(void)
{
  char *inputs[] = {
    "", "\n", "a", "N40 10 20S", "4a", "40", "40 10 a 05 N", "40 10 a N", "91N", "70 110 21 S", "90 01 00 N", NULL
  };
  Latitudine l;
  int status;

  char **current = inputs;
  while (*current != NULL) {
    status = latitudine_parse(&l, *current);

    CU_ASSERT_EQUAL(status, -1);

    ++current;
  }
}

void test_parse(void)
{
  char *input_1 = "40N";
  char *input_2 = "40 N";
  char *input_3 = "  40 S";
  char *input_4 = "40 10S";
  char *input_5 = "40 10 05N";

  Latitudine l;
  int status;

  status = latitudine_parse(&l, input_1);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 1);

  status = latitudine_parse(&l, input_2);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, 1);

  status = latitudine_parse(&l, input_3);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 0);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, -1);

  status = latitudine_parse(&l, input_4);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 0);
  CU_ASSERT_EQUAL(l.segno, -1);

  status = latitudine_parse(&l, input_5);
  CU_ASSERT_EQUAL(status, 0);
  CU_ASSERT_EQUAL(l.gradi, 40);
  CU_ASSERT_EQUAL(l.primi, 10);
  CU_ASSERT_EQUAL(l.secondi, 5);
  CU_ASSERT_EQUAL(l.segno, 1);
}

int main(void)
{
  CU_pSuite pSuite = NULL;
  int exit_value = 0;

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
  if ((NULL == CU_add_test(pSuite, "test make latitudine", test_make)) ||
    (NULL == CU_add_test(pSuite, "test parse bad", test_parse_bad)) ||
    (NULL == CU_add_test(pSuite, "test parse", test_parse)))
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
