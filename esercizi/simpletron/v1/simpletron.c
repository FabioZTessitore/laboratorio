/* simpletron.c */

#include <stdio.h>
#include "simpletron.h"
#include "cpu.h"
#include "memory.h"

void simpletron_welcome(void)
{
  printf("*** Welcome to Simpletron! ***\n");
  printf("*** Please enter your program one istruction    ***\n");
  printf("*** (or data word) at a time. I will display    ***\n");
  printf("*** the location number and a question mark (?) ***\n");
  printf("*** You the type the word for that location.    ***\n");
  printf("*** Type -99999 to stop entering your program.  ***\n\n");
}

void simpletron_enterProgram(int memory[], const int memory_size)
{
  int instruction = -1;
  int index = 0;

  while (instruction != -99999) {
    printf(" %02d ? ", index);
    scanf("%d", &instruction);

    if (instruction != -99999) {
      memory_set(memory, memory_size, index, instruction);
      index++;
    }
  }

  printf("*** Program loading completed ***\n");
}

void simpletron_execProgram(int memory[], const int memory_size,
  int * const p_accumulator,
  int * const p_instructionRegister, int * const p_instructionCounter,
  int * const p_opcode, int * const p_operand)
{
  printf("*** Program execution begins ***\n");

  cpu_run(memory, memory_size, p_accumulator, p_instructionRegister, p_instructionCounter, p_opcode, p_operand);

  cpu_dump(*p_accumulator, *p_instructionRegister, *p_instructionCounter, *p_opcode, *p_operand);
  putchar('\n');
  memory_dump(memory, memory_size);
}
