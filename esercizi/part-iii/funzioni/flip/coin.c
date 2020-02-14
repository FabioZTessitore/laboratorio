/* coin.c */

#include "coin.h"
#include "random.h"

void coin_init(void)
{
  random_init();
}

int coin_flip(void)
{
  return random_between(0, 2);
}
