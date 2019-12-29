/* contacar.c */

/* conta i caratteri forniti in input */

/* istruzioni per la compilazione e l'esecuzione:
$ make contacar
$ ./contacar < test.txt
*/

#include <stdio.h>

int main(void)
{
  int c;
  int n = 0; /* numero di caratteri */

  while ( (c = getchar()) != EOF ) {
    n++;
  }

  printf("Totale caratteri letti: %d\n", n);

  return 0;
}
