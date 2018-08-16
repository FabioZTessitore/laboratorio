/* main.c */

/* Esempio d'uso delle funzioni di myvect */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_sort.h"

int main()
{
  int N = 10;
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  myvect_bubble_sort(vett, N);
  myvect_print(vett, N);

  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  myvect_selection_sort(vett, N);
  myvect_print(vett, N);

  return 0;
}
