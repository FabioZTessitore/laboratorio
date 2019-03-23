/* main.c */

/* Uso di una libreria */

/* istruzione per la compilazione e l'esecuzione:
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

int main()
{
  random_init();

  printf("Una cifra casuale: %d\n", random_between(0, 10));

  return 0;
}
