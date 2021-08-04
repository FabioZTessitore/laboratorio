/* dado.c */

#include "random.h"
#include "dado.h"

void dado_init(void)
{
  random_init();
}

int dado_roll(void)
{
  return random_between(1, 7);
}
