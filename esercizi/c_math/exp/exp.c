/* exp.c */

/* Calcola e^x = 1 + x/1! + x^2/2! + x^3/3! + ... */

/* Istruzioni per la compilazione e l'esecuzione:
$ make exp
$ ./exp
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  double x = 0.;
  double x_to_n = 1.;

  int fatt = 1;

  int counter;

  double e_to_x = 1.;

  printf("Exp\nCalcola e^x\n\n");

  printf("x: ");
  scanf("%lf", &x);

  /* da libreria matematica */
  printf("e^x (da libreria matematica) = %f\n\n", exp(x));

  x_to_n = x;
  for (counter = 1; counter < 10; counter++) {
    fatt *= counter;

    e_to_x += x_to_n / (double)fatt;

    x_to_n *= x;
  }
  printf("e^x (10 termini della serie) = %f\n", e_to_x);

  return 0;
}
