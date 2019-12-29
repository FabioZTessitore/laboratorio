/* spazimultipli.c */

/* copia i caratteri dallo standard input allo standard output
 * eliminando gli spazi multipli (non tiene conto di tabulazioni).
 * Ipotizza che la sequenza di caratteri non inizi con lo spazio.
 */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make spazimultipli
 $ ./spazimultipli < test4.txt
 */

/*
Stati possibili:
  1)  NORM      stato normale
  2)  SPACE     incontrato uno spazio

Tabella degli stati:
Stato       Input     Output      Nuovo Stato
 NORM       c!=' '      c              -
 NORM       c==' '      c            SPACE
SPACE       c!=' '      c             NORM
SPACE       c==' '      -              -
*/

#include <stdio.h>

int main(void)
{
  enum Stato { NORM, SPACE };
  int stato = NORM;

  int c;

  while ( (c = getchar()) != EOF ) {
    if (stato == NORM) {
      if (c == ' ') stato = SPACE;
      putchar(c);
    } else if (stato == SPACE) {
      if (c != ' ') {
        putchar(c);
        stato = NORM;
      }
    }
  }

  return 0;
}
