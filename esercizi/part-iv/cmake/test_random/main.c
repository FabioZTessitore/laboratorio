/* main.c */

/* Uso di una libreria */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * $ mkdir build
 * $ cd build
 * $ cmake ..
 * $ make
 * $ ./Number
 *
 * $ make test
 * $ ./test
 */

#include <stdio.h>
#include "random.h"

int main(void)
{
  random_init();

  printf("Una cifra casuale: %d\n", random_between(0, 10));

  return 0;
}
