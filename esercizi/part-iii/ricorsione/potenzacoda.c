/* potenzacoda.c */

/* Calcola la potenza tramite funzione ricorsiva
 * utilizza ricorsione in coda.
 */

#include <stdio.h>

int power_helper(int base, int exponent, int parziale);
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
  return power_helper(base, exponent, 1);
}

int power_helper(int base, int exponent, int parziale)
{
  if (exponent == 1) return base * parziale;

  return power_helper(base, exponent-1, base*parziale);
}
