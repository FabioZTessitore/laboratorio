/* fattoriale.c */

/* Calcola il fattoriale */

/* Istruzioni per la compilazione e l'esecuzione:
$ make fattoriale
$ ./fattoriale
*/

#include <stdio.h>

int main()
{
  int n;
  int fatt = 1;
  int counter = 1;

  printf("Calcola il fattoriale\n\n");

  /* input */
  do {
    printf("Inserisci un intero non negativo (1-15): ");
    scanf("%d", &n);
  } while (n < 0 || n > 15);

  /* calcola il fattoriale */
  for (counter = 2; counter <= n; counter++) {
    fatt *= counter;
  }

  /* output */
  printf("%d! = %d\n", n, fatt);

  return 0;
}
