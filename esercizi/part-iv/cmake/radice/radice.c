/* radice.c */

/* Compilazione di un programma che fa uso della libreria matematica con cmake */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * $ mkdir build
 * $ cd build
 * $ cmake ..
 * $ make
 * $ ./Radice
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
  double x = 5.;

  printf("Radice di %.2f = %.2f\n", x, sqrt(x));

  return 0;
}
