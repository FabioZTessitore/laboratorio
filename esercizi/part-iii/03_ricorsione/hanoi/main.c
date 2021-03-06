/* main.c */

/* La torre di Hanoi */

/* istruzioni per la compilazione e l'esecuzione:
$ make
$ ./hanoi
*/

#include <stdio.h>
#include "hanoi.h"

int main(void)
{
  int n_dischi = 4;

  printf("Spostamento di %d dischi dal paletto 1 al paletto 3.\n\n", n_dischi);

  hanoi(n_dischi, 1, 3, 2);

  return 0;
}
