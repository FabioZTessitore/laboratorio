/* ipotenusa.c */

/* Calcola l'ipotenusa di triangoli rettangoli */

#include <stdio.h>
#include <math.h>

double ipotenusa(double lato1, double lato2);

int main()
{
  printf("Triangolo   Lato 1   Lato 2   Ipotenusa\n");
  printf("%9d   %6.1f   %6.1f   %9.1f\n", 1, 3., 4., ipotenusa(3., 4.));
  printf("%9d   %6.1f   %6.1f   %9.1f\n", 2, 5., 12., ipotenusa(5., 12.));
  printf("%9d   %6.1f   %6.1f   %9.1f\n", 3, 8., 15., ipotenusa(8., 15.));

  return 0;
}

double ipotenusa(double lato1, double lato2)
{
  return sqrt(lato1*lato1 + lato2*lato2);
}
