/* main.c */

/* Simulazione del lancio di una moneta */

#include <stdio.h>
#include "random.h"

int flip_coin();

int main()
{
  int i;
  int trials = 100;
  int head_counter = 0, tail_counter = 0;

  random_init();

  printf("Lancio di una moneta %d volte\n", trials);

  for (i = 0; i < 100; i++) {
    if (flip_coin() == 0) {
      head_counter++;
    } else {
      tail_counter++;
    }
  }

  printf("Totale Head: %d\n"
        "Totale Tail: %d\n", head_counter, tail_counter);

  return 0;
}

int flip_coin()
{
  return random_between(0, 2);
}
