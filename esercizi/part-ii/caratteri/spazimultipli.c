/* spazimultipli.c */

/* copia i caratteri dallo standard input allo standard output
 * eliminando gli spazi multipli (non tiene conto di tabulazioni)
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

int main()
{
  enum STATO { NORM, SPACE };
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
