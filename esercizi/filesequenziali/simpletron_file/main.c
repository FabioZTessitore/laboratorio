/* main.c */

/* Simpletron */

#include <stdio.h>
#include "simpletron.h"

int main(void)
{
  Simpletron aSimpletron = simpletron_make();

  simpletron_welcome();

  simpletron_enterProgram(&aSimpletron);

  simpletron_execProgram(&aSimpletron);

  return 0;
}
