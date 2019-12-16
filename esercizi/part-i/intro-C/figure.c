/* figure.c */

/* Stampa alcune figure */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c figure.c -o figure.o
 *
 * Link:
 * $ gcc figure.o -o figure
 *
 * Esecuzione:
 * $ ./figure
 */

#include <stdio.h>

int main(void)
{
  printf("********    ****\n"
         "*      *    *  *\n"
         "*      *    *  *\n"
         "*      *    *  *   *****\n"
         "*      *    *  *   *   *\n"
         "*      *    *  *   *   *\n"
         "********    ****   *****\n");

  return 0;
}
