/* main.c */

/* Esempio d'uso delle funzioni di myvect */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"

int main()
{
  int N = 10;
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  myvect_zeroes(vett, N);
  myvect_print(vett, N);

  myvect_ones(vett, N);
  myvect_print(vett, N);

  myvect_sequence(vett, N, 1, 3);
  myvect_print(vett, N);

  myvect_random(vett, N, 100, 200);
  myvect_print(vett, N);

  myvect_reverse(vett, N);
  myvect_print(vett, N);

  return 0;
}
