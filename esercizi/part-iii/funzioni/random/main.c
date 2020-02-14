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

int main(void)
{
  int quanti = 5;   /* quanti numeri estrarre */
  int min, max;

  puts("Random");
  puts("Modulo per la generazione di numeri pseudocasuali");

  /* inizializza modulo */
  random_init();

  min = 1;
  max = 1;
  genera_e_stampa_numeri(quanti, min, max);

  min = 1;
  max = 2;
  genera_e_stampa_numeri(quanti, min, max);

  min = 1;
  max = 3;
  genera_e_stampa_numeri(quanti, min, max);

  min = 100;
  max = 150;
  genera_e_stampa_numeri(quanti, min, max);

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
