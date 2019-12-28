/* quadrato.c */

/* Disegna un quadrato 'pieno' di lato compreso tra 1 e 20 */

/* Istruzioni per la compilazione e l'esecuzione:
$ make quadrato
$ ./quadrato
*/

#include <stdio.h>

int main(void)
{
  /* input */
  int lato;

  /* carattere utilizzato per il disegno */
  int car = '*';

  /* contatori */
  int riga, colonna;

  /* input, accetta interi tra 1 e 20 */
  do {
    printf("Lato del quadrato: ");
    scanf("%d", &lato);

    if (lato < 1 || lato > 20) {
      printf("Valore fuori dai limiti!\n\n");
    }
  } while (lato < 1 || lato > 20);

  riga = 0;
  while (riga < lato) {

    colonna = 0;
    while (colonna < lato) {
      putchar(car);
      colonna++;
    }
    putchar('\n');

    riga++;
  }

  return 0;
}
