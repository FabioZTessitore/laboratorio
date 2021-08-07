/* main.c */

/* Esempio d'uso delle funzioni di myvect */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"

int main(void)
{
  #define N 10
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  printf("Tutti zero ...\n");
  myvect_zeroes(vett, N);
  myvect_print(vett, N);

  printf("Tutti uno ...\n");
  myvect_ones(vett, N);
  myvect_print(vett, N);

  printf("Da 1 con passo 3 ...\n");
  myvect_sequence(vett, N, 1, 3);
  myvect_print(vett, N);

  printf("Casuali in [100, 200[ ...\n");
  myvect_random(vett, N, 100, 200);
  myvect_print(vett, N);

  printf("Reverse ...\n");
  myvect_reverse(vett, N);
  myvect_print(vett, N);

  return 0;
}
