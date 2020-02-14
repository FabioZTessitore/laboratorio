/* random.c */

#include <stdlib.h>
#include <time.h>
#include "random.h"

void random_init(void)
{
  srand( time(NULL) );
}

int random_between(int min, int max)
{
  return min + rand() % (max - min);
}
