/* dado.c */

#include "dado.h"
#include "random.h"

void dado_init(void)
{
  random_init();
}

int dado_roll(void)
{
  return random_between(1, 7);
}
