/* contaparole.c */

/* conta caratteri, righe e parole dallo stdin
 * (ipotizza assenza di spazi multipli) */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make contaparole
 $ ./contaparole < testo.txt
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
           c=='\t'            -             OUT

 START     c!=' '  and
           c!='\n' and
           c!='\t'            ++nw          IN

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
           c!='\t'            ++nw           IN
 */

#include <stdio.h>


int main()
{
  enum Stato { START, IN, OUT };
  int stato = START;

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
    if (stato == START) {
      if (c == ' ' || c == '\n' || c == '\t') {
        stato = OUT;
      } else {
        stato = IN;
        ++nw;
      }
    } else if (stato == IN) {
      if (c == ' ' || c == '\n' || c == '\t') stato = OUT;
      /* else: stato continua ad essere IN */
    } else if (stato == OUT) {
      /* ipotizza che non siano possibili spazi multipli,
         incluso perche' alcuni editor di testo
         aggiungono un newline al termine del file */
      if (c == ' ' || c == '\n' || c == '\t')
        ;
      else {
        stato = IN;
        ++nw;
      }
    }
  }

  printf("Caratteri letti: %d\n", nc);
  printf("Righe lette: %d\n", nl);
  printf("Parole lette: %d\n", nw);

  return 0;
}
