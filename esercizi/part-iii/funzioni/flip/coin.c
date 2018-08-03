/* coin.c */

#include "random.h"
#include "coin.h"

void coin_init()
{
  random_init();
}

int coin_flip()
{
  return random_between(0, 2);
}

int coin_trial(int trials)
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
