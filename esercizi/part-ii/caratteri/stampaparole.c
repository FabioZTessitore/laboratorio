/* stampaparole.c */

/* stampa il testo in ingresso una parola per riga
 * (non ammette la presenza di spazi multipli) */

#include <stdio.h>

int main()
{
  enum STATO { IN, OUT };  /* all'interno e all'esterno di una parola */
  int stato = IN;

  int c;

  while ( (c=getchar()) != EOF ) {
    if (stato == IN) {
      if (c==' ' || c=='\n' || c=='\t') {
        putchar('\n');
        stato = OUT;
      } else {
        putchar(c);
      }
    } else if (stato == OUT) {
      putchar(c);
      stato = IN;
    }
  }

  return 0;
}
