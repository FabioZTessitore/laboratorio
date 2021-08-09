/* conversioni.c */

/* Converte una stringa in double e viceversa */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char stringa_iniziale[] = "123";
  char stringa_finale[6]; /* "123.0" e terminatore */

  double num = atof(stringa_iniziale);

  sprintf(stringa_finale, "%.1f", num);

  puts(stringa_finale);

  return 0;
}
