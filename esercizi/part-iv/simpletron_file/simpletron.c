/* simpletron.c */

#include <stdio.h>
#include <stdlib.h>
#include "cpu.h"
#include "memory.h"
#include "simpletron.h"
#include "utils.h"

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

void simpletron_enterProgram(Simpletron * const pSimpletron)
{
  int instruction = -1;
  int index = 0;
  char buffer[80] = "";
  FILE *f;

  printf("Enter source filename: ");
  strSafeInput(buffer, 80);
  
  f = fopen(buffer, "r");
  if (!f) {
    fprintf(stderr, "File \"%s\" not found\n", buffer);
    exit(-1);
  }

  while (!feof(f)) {
    fgets(buffer, 80, f);
    sscanf(buffer, "%d", &instruction);
    if (instruction != -99999) {
      memory_set(&(pSimpletron->memory), index++, instruction);
    }
  }

  fclose(f);

  printf("*** Program loading completed ***\n");
}

void simpletron_execProgram(Simpletron * const pSimpletron)
{
  printf("*** Program execution begins ***\n");

  cpu_run(&(pSimpletron->cpu), &(pSimpletron->memory));

  cpu_dump(&(pSimpletron->cpu));
  putchar('\n');
  memory_dump(&(pSimpletron->memory));
}
