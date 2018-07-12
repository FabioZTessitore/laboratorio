/* address.c */

/* Stampa gli indirizzi degli elementi di un vettore */

/* Istruzioni per la compilazione e l'esecuzione:
$ make address
$ ./address
*/

#include <stdio.h>

int main()
{
  int num[10];
  int i;

  for (i = 0; i < 10; i++) {
    printf("indirizzo di num[%d]: %p\n", i, (void *)&num[i]);
  }

  return 0;
}
