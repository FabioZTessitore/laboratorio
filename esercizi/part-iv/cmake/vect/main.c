/* main.c */

/* Uso dei moduli myvect */

/* istruzione per la compilazione e l'esecuzione:
 *
 * $ mkdir build
 * $ cd build
 * $ cmake ..
 * $ make
 * $ ./Vettori
 */

#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"
#include "myvect_search.h"
#include "myvect_sort.h"
#include "myvect_utils.h"

void doppio(int *);

int main()
{
  int VETT_SIZE = 10;
  int v[VETT_SIZE];
  int sum = 0;
  int indexOf42 = -1;

  myvect_init();

  myvect_random(v, VETT_SIZE, 0, 99);
  myvect_print(v, VETT_SIZE);

  sum = myvect_sum(v, VETT_SIZE);
  printf("sum is %d\n", sum);

  indexOf42 = myvect_linear_search(v, VETT_SIZE, 42);
  if (indexOf42 > 0) {
    printf("42 is present at index %d\n", indexOf42);
  } else {
    printf("42 is not present\n");
  }

  myvect_selection_sort(v, VETT_SIZE);
  printf("Vettore ordinato:\n");
  myvect_print(v, VETT_SIZE);

  myvect_apply(v, VETT_SIZE, doppio);
  printf("Vettore raddoppiato:\n");
  myvect_print(v, VETT_SIZE);

  return 0;
}

void doppio(int *item)
{
  *item *= 2;
}
