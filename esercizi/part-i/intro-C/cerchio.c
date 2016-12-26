/* cerchio.c */

#include <stdio.h>

int main()
{
  /* costanti utili */
  double pi = 3.14159;

  /* variabili di input */
  int raggio;

  /* input */
  printf("Raggio del cerchio (intero): ");
  scanf("%d", &raggio);

  /* calcola e stampa */
  printf("Diametro: %f\n", raggio*2.0);
  printf("Circonferenza: %f\n", 2.0 * pi * raggio);
  printf("Superficie: %f\n", pi * raggio * raggio);

  return 0;
}
