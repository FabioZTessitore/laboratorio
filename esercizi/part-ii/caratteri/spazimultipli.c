/* spazimultipli.c */

/* copia i caratteri dallo standard input allo standard output
 * eliminando gli spazi multipli (non tiene conto di tabulazioni)
 */

#include <stdio.h>

int main()
{
  enum STATO { NORM, MULSPACE };
  int stato = NORM;

  int c;

  while ( (c = getchar()) != EOF ) {
    if (stato == NORM) {
      if (c == ' ') stato = MULSPACE;
      putchar(c);
    } else if (stato == MULSPACE) {
      if (c != ' ') {
        putchar(c);
        stato = NORM;
      }
    }
  }

  return 0;
}
