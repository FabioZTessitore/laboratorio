/* main.c */

/* Compilazione e uso di una modulo con cmake */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * $ mkdir build
 * $ cd build
 * $ cmake ..
 * $ make
 * $ ./Number
 */

#include <stdio.h>
#include "random.h"

int main()
{
  random_init();

  printf("Una cifra casuale in [0, 10): %d\n", random_between(0, 10));

  return 0;
}
