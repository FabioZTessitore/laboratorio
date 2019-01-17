/* main.c */

/* Simulazione del lancio di una moneta */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./coin
 */

#include <stdio.h>
#include "coin.h"


/* simulate():  simulazione del lancio di una moneta
 *
 * parametri:
 *  trials:  numero di lanci
 *
 * restituisce il numero di Head o Tail
 */
int simulate(int trials);


int main()
{
  int trials = 100;
  int head_counter = 0;

  coin_init();

  printf("Lancio di una moneta %d volte\n", trials);
  head_counter = simulate(trials);

  printf("Totale Head: %d\n"
        "Totale Tail: %d\n", head_counter, trials - head_counter);

  return 0;
}

int simulate(int trials)
{
  int i;
  int counter = 0;

  for (i = 0; i < trials; i++) {
    if (coin_flip() == 0) {
      counter++;
    }
  }

  return counter;
}
