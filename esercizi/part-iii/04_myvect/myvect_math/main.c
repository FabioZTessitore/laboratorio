/* main.c */

/* Esempio d'uso delle funzioni di myvect e myvect_math */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int main(void)
{
  #define N 10
  int vett1[N];
  int vett2[N];

  printf("MyVect\n\n");

  myvect_init();

  printf("vett1 random in [0, 100[ ...\n");
  myvect_random(vett1, N, 0, 100);
  myvect_print(vett1, N);

  printf("Cerca il minimo\n");
  printf("Minimo: %d\n", myvect_min(vett1, N));
  printf("Posizione del minimo: %d\n", myvect_min_index(vett1, N));

  printf("vett1 e vett2, sequenze da 0 con passo 1 ...\n");
  myvect_sequence(vett1, N, 0, 1);
  myvect_sequence(vett2, N, 0, 1);
  myvect_print(vett1, N);
  myvect_print(vett2, N);
  printf("Dot Product: %d\n", myvect_dot_product(vett1, vett2, N));

  return 0;
}
