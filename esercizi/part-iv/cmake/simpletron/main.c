/* main.c */

/* Simpletron */

#include <stdio.h>
#include "simpletron.h"

int main()
{
  Simpletron s = simpletron_make();

  simpletron_welcome();

  simpletron_enterProgram(&s);

  simpletron_execProgram(&s);

  return 0;
}
