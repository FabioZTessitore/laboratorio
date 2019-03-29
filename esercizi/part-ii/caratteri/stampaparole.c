/* stampaparole.c */

/* stampa il testo in ingresso una parola per riga
 * (ipotizza assenza di spazi multipli) */

/* istruzioni per la compilazione e l'esecuzione:
$ make stampaparole
$ ./stampaparole < testo.txt
*/

/*
Stati possibili:
  1)  START    stato iniziale, utilizzato per
                capire se il primo carattere
                e' di spaziatura o meno
  2)  IN       all'interno di una parola
  3)  OUT      all'esterno delle parole

Tabella degli stati:
Stato       Input          Output      Nuovo Stato
START     c==' '  or
          c=='\n' or
          c=='\t'            -            OUT

START     c!=' '  and
          c!='\n' and
          c!='\t'            c             IN

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
  enum Stato { START, IN, OUT };
  int stato = START;

  int c;

  while ( (c=getchar()) != EOF ) {
    if (stato == START) {
      if (c==' ' || c=='\n' || c=='\t') {
        stato = OUT;
      } else {
        putchar(c);
        stato = IN;
      }
    } else if (stato == IN) {
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
