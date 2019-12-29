/* contaparole.c */

/* conta caratteri, righe e parole dallo stdin
 * (ipotizza assenza di spazi multipli)
 */

/* istruzioni per la compilazione e l'esecuzione:
$ make contaparole
$ cat test4.txt | ./spazimultipli | ./contaparole
*/

/*
Stati possibili:
  1)  IN       all'interno di una parola
  2)  OUT      all'esterno delle parole

Tabella degli stati:
  Stato       Input          Output      Nuovo Stato
    IN       c==' '  or
             c=='\n' or
             c=='\t'           ++nw          OUT

    IN       c!=' '  and
             c!='\n' and
             c!='\t'            -              -

   OUT       c==' '  or
             c=='\n' or
             c=='\t'               STATO NON POSSIBILE PER IPOTESI

   OUT       c!=' '  and
             c!='\n' and
             c!='\t'             -            IN
*/

#include <stdio.h>

int main(void)
{
  enum Stato { IN, OUT };
  int stato = IN;

  int c;
  int nc = 0; /* num caratteri */
  int nl = 0; /* num newline */
  int nw = 0; /* num parole */

  while ( (c = getchar()) != EOF ) {
    /* conta caratteri */
    ++nc;

    /* conta righe */
    if (c == '\n') ++nl;

    /* conta parole */
    if (stato == IN) {
      if (c == ' ' || c == '\n' || c == '\t') {
        stato = OUT;
        ++nw;
      }
      /* else: stato continua ad essere IN */
    } else if (stato == OUT) {
      if (c == ' ' || c == '\n' || c == '\t')
        ;
      else {
        stato = IN;
      }
    }
  }

  printf("Caratteri letti: %d\n", nc);
  printf("Righe lette: %d\n", nl);
  printf("Parole lette: %d\n", nw);

  return 0;
}
