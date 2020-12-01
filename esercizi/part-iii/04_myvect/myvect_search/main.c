/* main.c */

/* Esempio d'uso delle funzioni di myvect e myvect_search */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_search.h"

int main(void)
{
  #define N 10
  int vett[N];
  int index;

  printf("MyVect\n\n");

  myvect_init();

  printf("vett sequenza da 1 con passo 3 ...\n");
  myvect_sequence(vett, N, 1, 3);
  myvect_print(vett, N);

  printf("Cerca il valore 7\n");
  index = myvect_linear_search(vett, N, 7);
  if (index >= 0) {
    printf("Trovato alla posizione %d\n", index);
  } else {
    printf("Non trovato\n");
  }

  return 0;
}
