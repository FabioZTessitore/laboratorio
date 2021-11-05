/* main.c */

/* Simpletron */

#include "simpletron.h"

int main(void)
{
  Simpletron aSimpletron = simpletron_make();

  simpletron_welcome();

  simpletron_enter_program(&aSimpletron);

  simpletron_execute_program(&aSimpletron);

  simpletron_dump(&aSimpletron);

  return 0;
}
