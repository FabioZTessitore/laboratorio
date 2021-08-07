/* main.c */

/* Confronto tra metodi di ordinamento */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myvect.h"
#include "myvect_sort.h"

int int_compare(const void *a, const void *b);

int main(void)
{
  #define N 100000  /* 100k */
  int vett[N];
  int vett_backup[N];
  long int i;
  clock_t begin, end;
  double t;

  printf("MyVect\n\n");

  myvect_init();

  printf("vett random in [0, 1000[ ...\n");
  myvect_random(vett, N, 0, 1000);
  for (i = 0; i < N; i++) vett_backup[i] = vett[i];

  printf("Bubble Sort\n");
  begin = clock();
  myvect_bubble_sort(vett, N);
  end = clock();
  t = (double)(end - begin) / (double)CLOCKS_PER_SEC;
  printf("Time: %.2f\n\n", t);

  /* restore from backup */
  for (i = 0; i < N; i++) vett[i] = vett_backup[i];

  printf("Selection Sort\n");
  begin = clock();
  myvect_selection_sort(vett, N);
  end = clock();
  t = (double)(end - begin) / (double)CLOCKS_PER_SEC;
  printf("Time: %.2f\n\n", t);

  /* restore from backup */
  for (i = 0; i < N; i++) vett[i] = vett_backup[i];

  printf("QSort\n");
  begin = clock();
  qsort(vett, N, sizeof(int), int_compare);
  end = clock();
  t = (double)(end - begin) / (double)CLOCKS_PER_SEC;
  printf("Time: %.2f\n\n", t);

  return 0;
}

int int_compare(const void *a, const void *b)
{
  const int *pa = (const int *)a;
  const int *pb = (const int *)b;

  return *pa - *pb;
}
