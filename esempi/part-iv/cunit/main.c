/* main.c */

#include <stdio.h>
#include "aritmetica.h"

int main()
{
  int a = 5;
  int b = 3;
  int somma = aritmetica_somma(a, b);

  printf("%d + %d = %d\n", a, b, somma);

  return 0;
}
