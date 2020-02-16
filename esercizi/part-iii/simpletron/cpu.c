/* cpu.c */

#include <stdio.h>
#include "cpu.h"
#include "memory.h"

void cpu_dump(const int accumulator, const int instructionRegister,
  const int instructionCounter, const int opcode, const int operand)
{
  printf("\n\nREGISTERS:\n");
  printf("accumulator\t\t%+05d\n", accumulator);
  printf("instructionCounter\t   %02d\n", instructionCounter);
  printf("instructionRegister\t%+05d\n", instructionRegister);
  printf("operationCode\t\t   %02d\n", opcode);
  printf("operand\t\t\t   %02d\n", operand);
}

void cpu_fetch(const int memory[], const int memory_size,
  int * const p_instructionRegister, int * const p_instructionCounter,
  int * const p_opcode, int * const p_operand)
{
  *p_instructionRegister = memory_get(memory, memory_size, *p_instructionCounter);

  *p_opcode = *p_instructionRegister / 100;
  *p_operand = *p_instructionRegister % 100;

  (*p_instructionCounter)++;
}

int cpu_execute(int memory[], const int memory_size,
  int * const p_accumulator, int * const p_instructionCounter,
  const int opcode, const int operand)
{
  int halt = 0;
  int temp;

  switch (opcode) {
    case READ:
      printf("Enter an integer\n\t? ");
      scanf("%d", &temp);
      memory_set(memory, memory_size, operand, temp);
      break;
    case WRITE:
      printf("--> %d\n", memory_get(memory, memory_size, operand));
      break;
    case LOAD:
      *p_accumulator = memory_get(memory, memory_size, operand);
      break;
    case STORE:
      memory_set(memory, memory_size, operand, *p_accumulator);
      break;
    case ADD:
      *p_accumulator += memory_get(memory, memory_size, operand);
      break;
    case SUB:
      *p_accumulator -= memory_get(memory, memory_size, operand);
      break;
    case MUL:
      *p_accumulator *= memory_get(memory, memory_size, operand);
      break;
    case DIV:
      *p_accumulator /= memory_get(memory, memory_size, operand);
      break;
    case BRANCH:
      *p_instructionCounter = operand;
      break;
    case BRANCHNEG:
      if (*p_accumulator < 0) *p_instructionCounter = operand;
      break;
    case BRANCHZERO:
      if (*p_accumulator == 0) *p_instructionCounter = operand;
      break;
    case HALT:
      printf("*** Simpletron execution terminated ***\n");
      halt = 1;
      break;
    default:
      printf("*** Simpletron runtime error, opcode not valid! ***\n");
      halt = 1;
      break;
  }

  return halt;
}

void cpu_run(int memory[], const int memory_size,
      int * const p_accumulator,
      int * const p_instructionRegister, int * const p_instructionCounter,
      int * const p_opcode, int * const p_operand)
{
  int halt = 0;

  while (!halt) {
    cpu_fetch(memory, memory_size, p_instructionRegister, p_instructionCounter, p_opcode, p_operand);
    halt = cpu_execute(memory, memory_size, p_accumulator, p_instructionCounter, *p_opcode, *p_operand);
  }
}
