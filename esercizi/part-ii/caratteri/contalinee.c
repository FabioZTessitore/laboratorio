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
  int n = 0; /* numero di linee */

  while ( (c=getchar()) != EOF ) {
    if (c == '\n') n++;
  }

  printf("Totale linee lette: %d\n", n);

  return 0;
}
