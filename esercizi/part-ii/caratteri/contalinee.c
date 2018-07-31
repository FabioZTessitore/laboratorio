/* contalinee.c */

/* conta le linee fornite in input */

/* istruzioni per la compilazione e l'esecuzione:
$ make contalinee
$ ./contalinee < testo
*/

#include <stdio.h>

int main()
{
  int c;
  int nl = 0; /* numero di linee */

  while ( (c=getchar()) != EOF ) {
    if (c == '\n') nl++;
  }

  printf("Totale linee lette: %d\n", nl);

  return 0;
}
