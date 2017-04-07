/* exp.c */

/* Calcola e^x = 1 + x/1! + x^2/2! + x^3/3! + ... */

#include <stdio.h>
#include <math.h>

int main()
{
  double x = 0.;
  double x_to_n = 1.;

  int fatt = 1;

  int counter;

  double result = 1.;

  printf("Exp\nCalcola e^x\n\n");

  printf("x: ");
  scanf("%lf", &x);

  /* da libreria matematica */
  printf("e^x (da libreria matematica) = %f\n\n", exp(x));

  x_to_n = x;
  for (counter = 1; counter < 10; counter++) {
    fatt *= counter;

    result += x_to_n / (double)fatt;

    x_to_n *= x;
  }
  printf("e^x = %f\n", result);

  return 0;
}
