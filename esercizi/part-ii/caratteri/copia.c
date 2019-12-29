/* copia.c */

/* copia file di testo */

/* istruzioni per la compilazione e l'esecuzione:
$ make copia
$ ./copia < test.txt > temp.txt
*/

#include <stdio.h>

int main(void)
{
  int c;

  while ( (c = getchar()) != EOF ) {
    putchar(c);
  }

  return 0;
}
