/* potenza.c */

/* Calcola la potenza tramite funzione ricorsiva */

#include <stdio.h>

int power(int base, int exponent);

int main()
{
  int b = 3;
  int e = 4;

  printf("%d^%d = %d\n", b, e, power(b, e));

  return 0;
}

/* power:
 *
 * suppone che exponent sia un intero maggiore
 * o uguale a 1
 */
int power(int base, int exponent)
{
  if (exponent == 1) return base;

  return base * power(base, exponent-1);
}
