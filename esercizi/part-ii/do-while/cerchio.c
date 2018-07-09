/* cerchio.c */

/* stampa diametro, superficie e circonferenza di un cerchio
 * dato il raggio (f.p.) non negativo */

/* Istruzioni per la compilazione e l'esecuzione:
$ make cerchio
$ ./cerchio
*/

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
