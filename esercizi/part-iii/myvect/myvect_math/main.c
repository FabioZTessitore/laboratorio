/* main.c */

/* Esempio d'uso delle funzioni di myvect e myvect_math */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int main()
{
  int N = 10;
  int vett[N];
  int vett2[N];
  int index;
  int min;
  int dot;

  printf("MyVect\n\n");

  myvect_init();

  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  printf("Cerca il minimo\n");
  min = myvect_min(vett, N);
  index = myvect_min_index(vett, N);

  printf("Minimo: %d\n", min);
  printf("Posizione del minimo: %d\n", index);

  myvect_sequence(vett, N, 0, 1);
  myvect_sequence(vett2, N, 0, 1);
  myvect_print(vett, N);
  myvect_print(vett2, N);
  dot = myvect_dot_product(vett, vett2, N);
  printf("Dot Product: %d\n", dot);

  return 0;
}
