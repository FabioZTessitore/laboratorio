/* simpletron.c */

#include <stdio.h>
#include "cpu.h"
#include "memory.h"
#include "simpletron.h"

void simpletron_welcome()
{
  printf("*** Welcome to Simpletron! ***\n");
  printf("*** Please enter your program one istruction    ***\n");
  printf("*** (or data word) at a time. I will display    ***\n");
  printf("*** the location number and a question mark (?) ***\n");
  printf("*** You the type the word for that location.    ***\n");
  printf("*** Type -99999 to stop entering your program.  ***\n\n");
}

void simpletron_enterProgram(Memory * const pMemory)
{
  int instruction = -1;
  int index = 0;

  while (instruction != -99999) {
    printf(" %02d ? ", index);
    scanf("%d", &instruction);

    if (instruction != -99999) {
      memory_set(pMemory, index++, instruction);
    }
  }

  printf("*** Program loading completed ***\n");
}

void simpletron_execProgram(Memory * const pMemory, Cpu * const pCpu)
{
  printf("*** Program execution begins ***\n");

  cpu_run(pCpu, pMemory);

  cpu_dump(pCpu);
  putchar('\n');
  memory_dump(pMemory);
}
