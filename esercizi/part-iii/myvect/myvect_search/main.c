/* main.c */

/* Esempio d'uso delle funzioni di myvect e myvect_search */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_search.h"
#include "myvect_sort.h"

int main()
{
  int N = 10;
  int vett[N];
  int index;

  printf("MyVect\n\n");

  myvect_init();

  myvect_sequence(vett, N, 1, 3);
  myvect_print(vett, N);

  printf("Cerca il valore 7\n");
  index = myvect_linear_search(vett, N, 7);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  myvect_selection_sort(vett, N);
  myvect_print(vett, N);

  /* cerca elemento inesistente */
  index = myvect_binary_search(vett, N, 500);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  /* cerca elemento sicuramente presente */
  vett[5] = 50;
  index = myvect_binary_search(vett, N, 50);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  return 0;
}
