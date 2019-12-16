/* fullname.c */

/* Stampa il nome completo con due chiamate a printf() */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c fullname.c -o fullname.o
 *
 * Link:
 * $ gcc fullname.o -o fullname
 *
 * Esecuzione:
 * $ ./fullname
 */

#include <stdio.h>

int main(void)
{
  printf("Fabio ");
  printf("Tessitore\n");

  return 0;
}
