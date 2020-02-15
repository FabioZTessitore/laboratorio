/* random.c */

#include <stdlib.h>
#include <time.h>
#include "random.h"

void random_init(void)
{
  srand( time(NULL) );
}

int random_between(const int min, const int max)
{
  if (max <= min) return min;

  return min + rand() % (max - min);
}
