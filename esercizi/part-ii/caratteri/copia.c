/* copia.c */

/* copia file di testo */

/* istruzioni per la compilazione e l'esecuzione:
$ make copia

$ ./copia < file_src > file_dst
*/

#include <stdio.h>

int main()
{
  int c;

  while ( (c = getchar()) != EOF ) {
    putchar(c);
  }

  return 0;
}
