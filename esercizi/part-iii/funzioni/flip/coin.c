/* coin.c */

#include "coin.h"
#include "random.h"

void coin_init()
{
  random_init();
}

int coin_flip()
{
  return random_between(0, 2);
}
