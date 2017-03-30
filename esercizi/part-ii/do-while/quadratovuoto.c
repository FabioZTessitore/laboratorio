/* quadratovuoto.c */

/* Disegnare un quadrato 'vuoto' di lato compreso tra 1 e 20 */

#include <stdio.h>

int main()
{
  /* input */
  int lato;

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

  /* prima riga */
  colonna = 0;
  while (colonna < lato) {
    putchar('*');
    colonna++;
  }
  putchar('\n');

  /* righe intermedie */
  riga = 1;
  while (riga < lato-1) {

    putchar('*');
    colonna = 1;
    while (colonna < lato-1) {
      putchar(' ');
      colonna++;
    }
    putchar('*');
    putchar('\n');

    riga++;
  }

  /* ultima riga */
  if (lato > 1) {
    colonna = 0;
    while (colonna < lato) {
      putchar('*');
      colonna++;
    }
    putchar('\n');
  }

  return 0;
}
