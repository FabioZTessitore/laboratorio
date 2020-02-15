/* main.c */

/* Riordino di un vettore mediante librerie di sistema */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include <stdlib.h>
#include "myvect.h"

int int_compare(const void *a, const void* b);

int main(void)
{
  const int N = 10;
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  printf("vett random in [0, 100[ ...\n");
  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  printf("qsort ...\n");
  qsort(vett, N, sizeof(int), int_compare);
  myvect_print(vett, N);

  return 0;
}

int int_compare(const void *a, const void* b)
{
  const int *pa = (const int*)a;
  const int *pb = (const int*)b;

  return *pa - *pb;
}
