/* main.c */

/* Simulazione del lancio di una moneta */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./coin
 */

#include <stdio.h>
#include "coin.h"

int main()
{
  int trials = 100;
  int head_counter = 0;

  coin_init();

  printf("Lancio di una moneta %d volte\n", trials);
  head_counter = coin_trial(trials);

  printf("Totale Head: %d\n"
        "Totale Tail: %d\n", head_counter, trials - head_counter);

  return 0;
}
