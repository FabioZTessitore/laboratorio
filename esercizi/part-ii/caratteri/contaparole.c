/* contaparole.c */

/* conta caratteri, righe e parole dallo stdin
 * (non ammette la presenza di spazi multipli) */

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
    ++nc;

    if (c=='\n') ++nl;

    if (stato == IN) {
      if (c==' ' || c=='\n' || c=='\t') stato = OUT;
    } else if (stato == OUT) {
      ++nw;
      stato = IN;
    }
  }

  printf("Caratteri letti: %d\n", nc);
  printf("Righe lette: %d\n", nl);
  printf("Parole lette: %d\n", nw);

  return 0;
}
