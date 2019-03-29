/* hello.c */

/* Esempio di compilazione di un singolo file con cmake */

/* istruzione per la compilazione e l'esecuzione:
 *
 * $ mkdir build
 * $ cd build
 * $ cmake ..
 * $ make
 * $ ./Hello
 */

#include <stdio.h>

int main()
{
  puts("Hello, World!");

  return 0;
}
