/* fattoriale.c */

/* Calcola i fattoriali degli interi da 1 a 5
 * e li visualizza in formato tabulare.
 *
 * 1!   2!   3!   4!   5!
 * 1    2    6   24  120
 */

#include <stdio.h>

int main()
{
  int fatt = 1;
  int counter;

  /* intestazione tabella */
  for (counter = 1; counter <= 5; counter++) {
    printf("%d!\t", counter);
  }
  putchar('\n');

  /* tabella dei fattoriali */
  for (counter = 1; counter <= 5; counter++) {
    fatt *= counter;
    printf("%d\t", fatt);
  }
  putchar('\n');

  return 0;
}
