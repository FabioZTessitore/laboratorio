#include "CUnit/Basic.h"
#include "aritmetica.h"

/* crea due suite di test per il modulo aritmetica.
 *
 * La prima suite effettua i test delle funzioni somma e sottrazione.
 * La seconda suite testa la combinazione di somma e sottrazione
 * per creare expressioni.
 *
 * Data la natura del modulo da testare (assenza di dati, file, ecc),
 * le funzioni di init e cleanup non sono necessarie.
 *
 * int suite_operazioni_init();     (return 0 per successo)
 * int suite_operazioni_cleanup();  (return 0 per successo)
 *
 * int suite_espressioni_init();
 * int suite_espressioni_cleanup();
 */

/* funzioni test per la suite 'Operazioni Aritmetiche' */
void test_somma(void)
{
  CU_ASSERT_EQUAL(aritmetica_somma(2, 3), 5);
  CU_ASSERT_EQUAL(aritmetica_somma(0, 0), 0);
  CU_ASSERT_EQUAL(aritmetica_somma(-1, 1), 0);
  CU_ASSERT_EQUAL(aritmetica_somma(-1, -2), -3);
}

void test_sottrazione(void)
{
  CU_ASSERT_EQUAL(aritmetica_sottrazione(2, 3), -1);
  CU_ASSERT_EQUAL(aritmetica_sottrazione(0, 0), 0);
  CU_ASSERT_EQUAL(aritmetica_sottrazione(-1, 1), -2);
  CU_ASSERT_EQUAL(aritmetica_sottrazione(-1, -2), 1);
}

/* funzioni test per la suite 'Espressioni Aritmetiche' */
void test_espressioni(void)
{
  /* (1 + 5) - 1 == 5 */
  CU_ASSERT_EQUAL(aritmetica_sottrazione(aritmetica_somma(1, 5), 1), 5);
}


int main()
{
  CU_pSuite pSuite = NULL;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Operazioni Aritmetiche", /* init() */NULL, /* cleanup() */NULL);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test somma", test_somma)) ||
    (NULL == CU_add_test(pSuite, "test sottrazione", test_sottrazione)))
  {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge una seconda suite di test al registro */
  pSuite = CU_add_suite("Espressioni Aritmetiche", /* init() */NULL, /* cleanup() */NULL);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test espressioni", test_espressioni)))
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
