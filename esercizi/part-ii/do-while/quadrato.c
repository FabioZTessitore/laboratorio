/* quadrato.c */

/* Disegnare un quadrato 'pieno' di lato compreso tra 1 e 20 */

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

  riga = 0;
  while (riga < lato) {

    colonna = 0;
    while (colonna < lato) {
      putchar('*');
      colonna++;
    }
    putchar('\n');

    riga++;
  }

  return 0;
}
