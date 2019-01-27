/* main.c */

/* Simpletron */

#include <stdio.h>
#include "simpletron.h"
#include "cpu.h"
#include "memory.h"

int main()
{
  Cpu theCpu = cpu_make();
  Memory theMemory = memory_make();

  simpletron_welcome();

  simpletron_enterProgram(&theMemory);

  simpletron_execProgram(&theMemory, &theCpu);

  return 0;
}
