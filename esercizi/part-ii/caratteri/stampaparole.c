/* stampaparole.c */

/* stampa il testo in ingresso una parola per riga
 * (ipotizza assenza di spazi multipli) */

/* istruzioni per la compilazione e l'esecuzione:
$ make stampaparole
$ ./stampaparole < testo.txt
*/

/*
Stati possibili:
  1)  IN       all'interno di una parola
  2)  OUT      all'esterno delle parole

Tabella degli stati:
Stato       Input          Output      Nuovo Stato
 IN       c==' '  or
          c=='\n' or
          c=='\t'           '\n'           OUT

 IN       c!=' '  and
          c!='\n' and
          c!='\t'            c              -

 OUT         -               c             IN
*/

#include <stdio.h>

int main()
{
  enum Stato { IN, OUT };
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
