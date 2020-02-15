/* potenzacoda.c */

/* Calcola la potenza tramite funzione ricorsiva.
 * Utilizza ricorsione in coda.
 */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make potenzacoda
 $ ./potenzacoda
 */

#include <stdio.h>

double power(double base, int exponent);
double power_helper(double base, int exponent, double parziale);

int main(void)
{
  double b = 3.;
  int e = 4;

  printf("%g^%d = %g\n", b, e, power(b, e));

  return 0;
}

/* power:
 *
 * suppone che exponent sia un intero maggiore
 * o uguale a 1
 */
double power(double base, int exponent)
{
  return power_helper(base, exponent, 1.);
}

double power_helper(double base, int exponent, double parziale)
{
  if (exponent == 1) return base * parziale;

  return power_helper(base, exponent-1, base*parziale);
}
