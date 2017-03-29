/* treintre.c */

/* stampa di 3 in 3 */

/* Istruzioni per la compilazione e l'esecuzione:
$ make treintre
$ ./treintre
*/

#include <stdio.h>

int main()
{
  int partenza = 0;
  int contatore = 0;

  printf("Conta di 3 in 3\n\n");

  printf("Numero di partenza: ");
  scanf("%d", &partenza);

  printf("\n\n");

  contatore = 0;
  while (contatore < 5) {
    printf("%d\n", partenza + contatore * 3);
    contatore++;
  }

  return 0;
}
