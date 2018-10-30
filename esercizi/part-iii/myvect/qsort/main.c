/* main.c */

/* Riordino di un vettore mediante librerie di sistema */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include <stdlib.h>
#include "myvect.h"
#include "random.h"

int int_compare(const void *a, const void* b);

int main()
{
  int N = 10;
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

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
