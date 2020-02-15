/* potenza.c */

/* Calcola la potenza tramite funzione ricorsiva */

/* istruzioni per la compilazione e l'esecuzione:
$ make potenza
$ ./potenza
*/

#include <stdio.h>

double power(double base, int exponent);

int main(void)
{
  double b = 3.2;
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
  if (exponent == 1) return base;

  return base * power(base, exponent-1);
}
