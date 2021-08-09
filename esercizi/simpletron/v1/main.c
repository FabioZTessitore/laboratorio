/* main.c */

/* Simpletron, versione senza strutture dati */

#include <stdio.h>
#include "simpletron.h"

int main(void)
{
  /* cpu data */
  int accumulator = 0;
  int opcode = 0;
  int operand = 0;
  int instructionCounter = 0;
  int instructionRegister = 0;

  /* memory data */
  #define MEMORY_SIZE 100
  int memory[MEMORY_SIZE] = { 0 };

  simpletron_welcome();

  simpletron_enterProgram(memory, MEMORY_SIZE);

  simpletron_execProgram(memory, MEMORY_SIZE, &accumulator,
    &instructionRegister, &instructionCounter, &opcode, &operand);

  return 0;
}
