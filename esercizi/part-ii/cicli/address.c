/* address.c */

/* Puntatori e indirizzi */

#include <stdio.h>

int main()
{
  int num[10];
  int i;

  for (i = 0; i < 10; i++) {
    printf("indirizzo di num[%d]: %p\n", i, (void *)&num[i]);
  }

  return 0;
}
