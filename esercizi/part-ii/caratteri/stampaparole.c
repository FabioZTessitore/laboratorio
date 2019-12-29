/* stampaparole.c */

/* stampa il testo in ingresso una parola per riga
 * (ipotizza assenza di spazi multipli)
 */

/* istruzioni per la compilazione e l'esecuzione:
$ make stampaparole
$ cat test4.txt | ./spazimultipli | ./stampaparole
*/

/*
Stati possibili:
  1)  IN       all'interno di una parola

Tabella degli stati:
Stato       Input          Output      Nuovo Stato
 IN       c==' '  or
          c=='\n' or
          c=='\t'           '\n'           IN

 IN       c!=' '  and
          c!='\n' and
          c!='\t'            c              -
*/

#include <stdio.h>

int main(void)
{
  int c;

  while ( (c=getchar()) != EOF ) {
    if (c==' ' || c=='\n' || c=='\t') {
      putchar('\n');
    } else {
      putchar(c);
    }
  }

  return 0;
}
