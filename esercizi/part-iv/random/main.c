/* main.c */

/* Estrae numeri pseudocasuali facendo uso del modulo random */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./random
 */

#include <stdio.h>
#include "random.h"

void genera_e_stampa_numeri(int quanti, int min, int max);

int main()
{
  puts("Random");
  puts("Modulo per la generazione di numeri pseudocasuali");

  /* inizializza modulo */
  random_init();

  genera_e_stampa_numeri(5, 1, 100);

  return 0;
}

void genera_e_stampa_numeri(int quanti, int min, int max)
{
  int i;

  printf("\n%d numeri compresi tra %d e %d:\n", quanti, min, max);
  for (i = 0; i < quanti; i++) {
    printf("%d\n", random_between(min, max));
  }
}
