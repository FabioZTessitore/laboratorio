#include "CUnit/Basic.h"
#include "memory.h"
#include "cpu.h"

/* crea una suite di test per il modulo Cpu */


/* funzione di init della suite */
int suite_cpu_init(void)
{
  /* nothing to do */

  return 0; /* success */
}

/* funzione di cleanup della suite */
int suite_cpu_cleanup(void)
{
  /* nothing to do */

  return 0; /* success */
}

/* funzioni test per la suite 'Cpu' */
void test_cpu_init(void)
{
  Cpu aCpu = cpu_make();

  CU_ASSERT_EQUAL(aCpu.accumulator, 0);
  CU_ASSERT_EQUAL(aCpu.instructionRegister, 0);
  CU_ASSERT_EQUAL(aCpu.instructionCounter, 0);
  CU_ASSERT_EQUAL(aCpu.opcode, 0);
  CU_ASSERT_EQUAL(aCpu.operand, 0);
}

void test_cpu_fetch(void)
{
  Memory m = memory_make();
  Cpu aCpu = cpu_make();
  const int INSTRUCTION = 1234;
  const int opCode = INSTRUCTION / 100;
  const int operand = INSTRUCTION % 100;

  /* set first memory cell */
  memory_set(&m, 0, INSTRUCTION);

  /* fetch instruction at location 0 */
  cpu_fetch(&m, &aCpu);

  CU_ASSERT_EQUAL(aCpu.instructionRegister, INSTRUCTION);
  CU_ASSERT_EQUAL(aCpu.opcode, opCode);
  CU_ASSERT_EQUAL(aCpu.operand, operand);
  CU_ASSERT_EQUAL(aCpu.instructionCounter, 1);
}

void test_cpu_run(void)
{
  Memory m = memory_make();
  Cpu aCpu = cpu_make();

  /* load a simple program */
  /* sum of two number */
  memory_set(&m, 0, 2099);    /* LOAD from 99 */
  memory_set(&m, 1, 3098);    /* ADD cell 98 */
  memory_set(&m, 2, 2197);    /* STORE into 97 */
  memory_set(&m, 3, 4300);    /* HALT */
  /* and data */
  memory_set(&m, 99, 5);
  memory_set(&m, 98, 3);
  /* result: 8 */

  /* run the program */
  cpu_run(&m, &aCpu);

  CU_ASSERT_EQUAL(aCpu.instructionRegister, 4300);
  CU_ASSERT_EQUAL(aCpu.opcode, 43);
  CU_ASSERT_EQUAL(aCpu.operand, 0);
  CU_ASSERT_EQUAL(aCpu.instructionCounter, 4);
  CU_ASSERT_EQUAL(aCpu.accumulator, 8);
}

int main(void)
{
  CU_pSuite pSuite = NULL;
  int exit_value = 0;

  /* inizializza il registro dei test */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* aggiunge una suite di test al registro */
  pSuite = CU_add_suite("Cpu", suite_cpu_init, suite_cpu_cleanup);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* aggiunge i test alla suite */
  if ((NULL == CU_add_test(pSuite, "test cpu make", test_cpu_init)) ||
    (NULL == CU_add_test(pSuite, "test cpu fetch", test_cpu_fetch)) ||
    (NULL == CU_add_test(pSuite, "test cpu run", test_cpu_run)))
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
