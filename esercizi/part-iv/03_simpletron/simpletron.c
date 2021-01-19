/* simpletron.c */

#include <stdio.h>
#include "cpu.h"
#include "memory.h"
#include "simpletron.h"

Simpletron simpletron_make(void)
{
  Simpletron aSimpletron;

  aSimpletron.memory = memory_make();
  aSimpletron.cpu = cpu_make();

  return aSimpletron;
}

void simpletron_welcome(void)
{
  printf("*** Welcome to Simpletron! ***\n");
  printf("*** Please enter your program one istruction    ***\n");
  printf("*** (or data word) at a time. I will display    ***\n");
  printf("*** the location number and a question mark (?) ***\n");
  printf("*** You the type the word for that location.    ***\n");
  printf("*** Type -99999 to stop entering your program.  ***\n\n");
}

void simpletron_enter_program(Simpletron * const pSimpletron)
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

void simpletron_execute_program(Simpletron * const pSimpletron)
{
  printf("*** Program execution begins ***\n");

  cpu_run_program(&(pSimpletron->cpu), &(pSimpletron->memory));
}

void simpletron_dump(const Simpletron * const pSimpletron)
{
  cpu_dump(&(pSimpletron->cpu));
  putchar('\n');
  memory_dump(&(pSimpletron->memory));
}