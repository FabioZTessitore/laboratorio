/* simpletron.c */

#include <stdio.h>
#include "simpletron.h"
#include "cpu.h"
#include "memory.h"

Simpletron simpletron_make()
{
  Simpletron aSimpletron;

  aSimpletron.cpu = cpu_make();
  aSimpletron.memory = memory_make();

  return aSimpletron;
}

void simpletron_welcome()
{
  printf("*** Welcome to Simpletron! ***\n");
  printf("*** Please enter your program one istruction    ***\n");
  printf("*** (or data word) at a time. I will display    ***\n");
  printf("*** the location number and a question mark (?) ***\n");
  printf("*** You the type the word for that location.    ***\n");
  printf("*** Type -99999 to stop entering your program.  ***\n\n");
}

void simpletron_enterProgram(Simpletron * const pSimpletron)
{
  int instruction = -1;
  int index = 0;

  while (instruction != -99999) {
    printf(" %02d ? ", index);
    scanf("%d", &instruction);

    if (instruction != -99999) {
      memory_set(&(pSimpletron->memory), index++, instruction);
    }
  }

  printf("*** Program loading completed ***\n");
}

void simpletron_execProgram(Simpletron * const pSimpletron)
{
  printf("*** Program execution begins ***\n");

  cpu_run(&(pSimpletron->memory), &(pSimpletron->cpu));

  cpu_dump(&(pSimpletron->cpu));
  putchar('\n');
  memory_dump(&(pSimpletron->memory));
}
