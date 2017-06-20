/* contaparole.c */

/* conta caratteri, righe e parole dallo stdin
 * (non ammette la presenza di spazi multipli) */

 /*
 Stati possibili:
   1)  IN       all'interno di una parola
   2)  OUT      all'esterno delle parole

 Tabella degli stati:
 Stato       Input          Output      Nuovo Stato
  IN       c==' '  or
           c=='\n' or
           c=='\t'            -             OUT

  IN       c!=' '  and
           c!='\n' and
           c!='\t'            -              -

 OUT       c==' '  or
           c=='\n' or
           c=='\t'           STATO NON POSSIBILE PER IPOTESI

 OUT       c!=' '  and
           c!='\n' and
           c!='\t'            -             IN
 */

#include <stdio.h>


int main()
{
  enum STATO { IN, OUT };  /* all'interno e all'esterno di una parola */
  int stato = OUT;

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
      if (c == ' ' || c == '\n' || c == '\t') stato = OUT;
      /* else stato continua ad essere IN */
    } else if (stato == OUT) {
      /* ipotizza che non siano possibili
      spazi multipli, quindi inizia una nuova parola */
      ++nw;
      stato = IN;
    }
  }

  printf("Caratteri letti: %d\n", nc);
  printf("Righe lette: %d\n", nl);
  printf("Parole lette: %d\n", nw);

  return 0;
}
