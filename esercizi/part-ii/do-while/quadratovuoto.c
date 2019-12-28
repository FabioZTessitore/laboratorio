/* quadratovuoto.c */

/* Disegna un quadrato 'vuoto' di lato compreso tra 1 e 20 */

/* Istruzioni per la compilazione e l'esecuzione:
$ make quadratovuoto
$ ./quadratovuoto
*/

#include <stdio.h>

int main(void)
{
  /* input */
  int lato;

  /* carattere per il disegno */
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

  /* prima riga (piena) */
  colonna = 0;
  while (colonna < lato) {
    putchar(car);
    colonna++;
  }
  putchar('\n');

  /* righe intermedie (vuote) */
  riga = 1;
  while (riga < lato-1) {
    putchar(car);

    colonna = 1;
    while (colonna < lato-1) {
      putchar(' ');
      colonna++;
    }

    putchar(car);
    putchar('\n');

    riga++;
  }

  /* ultima riga (piena) */
  if (lato > 1) {
    colonna = 0;
    while (colonna < lato) {
      putchar(car);
      colonna++;
    }
    putchar('\n');
  }

  return 0;
}
