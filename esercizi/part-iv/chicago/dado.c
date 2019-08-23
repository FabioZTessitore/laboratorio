/* dado.c */

#include "random.h"
#include "dado.h"

void dado_init()
{
  random_init();
}

int dado_roll()
{
  return random_between(1, 7);
}
