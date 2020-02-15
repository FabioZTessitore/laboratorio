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

int main(void)
{
  int N = 10;
  int vett[N];
  int index;

  printf("MyVect\n\n");

  myvect_init();

  printf("vett random in [0, 100[ ...\n");
  myvect_random(vett, N, 0, 100);
  myvect_print(vett, N);

  printf("riordina il vettore ...\n");
  myvect_selection_sort(vett, N);
  myvect_print(vett, N);

  /* cerca elemento inesistente */
  printf("cerca il valore 500 ...\n");
  index = myvect_binary_search(vett, N, 500);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  /* cerca elemento sicuramente presente */
  printf("vettore modificato ...\n");
  vett[5] = 50;
  myvect_selection_sort(vett, N);
  myvect_print(vett, N);
  printf("cerca il valore 50 ...\n");
  index = myvect_binary_search(vett, N, 50);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  return 0;
}
