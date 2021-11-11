/* cpu.c */

#include <stdio.h>
#include "cpu.h"
#include "memory.h"

Cpu cpu_make(void)
{
  Cpu aCpu;

  aCpu.accumulator = 0;
  aCpu.instructionRegister = 0;
  aCpu.instructionCounter = 0;
  aCpu.opcode = 0;
  aCpu.operand = 0;

  return aCpu;
}

void cpu_dump(const Cpu * const pCpu)
{
  printf("\n\nREGISTERS:\n");
  printf("accumulator\t\t%+05d\n", pCpu->accumulator);
  printf("instructionCounter\t   %02d\n", pCpu->instructionCounter);
  printf("instructionRegister\t%+05d\n", pCpu->instructionRegister);
  printf("operationCode\t\t   %02d\n", pCpu->opcode);
  printf("operand\t\t\t   %02d\n", pCpu->operand);
}

void cpu_fetch(Cpu * const pCpu, const Memory * const pMemory)
{
  pCpu->instructionRegister = memory_get(pMemory, pCpu->instructionCounter);

  pCpu->opcode = pCpu->instructionRegister / 100;
  pCpu->operand = pCpu->instructionRegister % 100;

  pCpu->instructionCounter++;
}

int cpu_execute(Cpu * const pCpu, Memory * const pMemory)
{
  int halt = 0;
  int temp;

  switch (pCpu->opcode) {
    case READ:
      printf("Enter an integer\n\t? ");
      scanf("%d", &temp);
      memory_set(pMemory, pCpu->operand, temp);
      break;
    case WRITE:
      printf("--> %d\n", memory_get(pMemory, pCpu->operand));
      break;
    case LOAD:
      pCpu->accumulator = memory_get(pMemory, pCpu->operand);
      break;
    case STORE:
      memory_set(pMemory, pCpu->operand, pCpu->accumulator);
      break;
    case ADD:
      pCpu->accumulator += memory_get(pMemory, pCpu->operand);
      break;
    case SUB:
      pCpu->accumulator -= memory_get(pMemory, pCpu->operand);
      break;
    case MUL:
      pCpu->accumulator *= memory_get(pMemory, pCpu->operand);
      break;
    case DIV:
      pCpu->accumulator /= memory_get(pMemory, pCpu->operand);
      break;
    case BRANCH:
      pCpu->instructionCounter = pCpu->operand;
      break;
    case BRANCHNEG:
      if (pCpu->accumulator < 0) pCpu->instructionCounter = pCpu->operand;
      break;
    case BRANCHZERO:
      if (pCpu->accumulator == 0) pCpu->instructionCounter = pCpu->operand;
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

void cpu_run(Cpu * const pCpu, Memory * const pMemory)
{
  int halt = 0;

  while (!halt) {
    cpu_fetch(pCpu, pMemory);
    halt = cpu_execute(pCpu, pMemory);
  }
}
