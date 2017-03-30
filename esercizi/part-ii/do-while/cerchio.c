/* cerchio.c */

#include <stdio.h>

int main()
{
  double pi = 3.14159;

  double raggio;

  do {
    printf("Raggio del cerchio: ");
    scanf("%lf", &raggio);
  } while (raggio < 0.);

  printf("Diametro: %f\n", raggio*2.0);
  printf("Circonferenza: %f\n", 2.0 * pi * raggio);
  printf("Superficie: %f\n", pi * raggio * raggio);

  return 0;
}
