/* crazy.c */

/* Esempio d'uso di variabili static */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make crazy
 * $ ./crazy
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int crazy_random();

int main()
{
  srand( time(NULL) );

  printf("Crazy Random\n\n");

  printf("Estrae tre numeri pari:\n");
  printf("%d\n", crazy_random());
  printf("%d\n", crazy_random());
  printf("%d\n", crazy_random());

  printf("\nD'ora in avanti estrae solo numeri dispari:\n");
  printf("%d\n", crazy_random());
  printf("%d\n", crazy_random());
  printf("%d\n", crazy_random());

  return 0;
}

int crazy_random()
{
  /* tiene traccia del numero di invocazioni */
  static int counter = 0;

  /* estrae un numero k compreso tra 0 e 4;
   * i numeri pari si ottengono con 2*k
   * i numeri dispari con 2*k+1
   */
  int k = rand() % 5;
  int n;

  if (counter < 3) {
    n = 2 * k;
  } else {
    n = 2*k + 1;
  }

  counter++;

  return n;
}
