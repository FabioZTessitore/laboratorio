/* contaspaziature.c */

/* conta spazi, tab e newline */

/* istruzioni per la compilazione e l'esecuzione:
$ make contaspaziature
$ ./contaspaziature < test2.txt
*/

#include <stdio.h>

int main(void)
{
  int c;

  int ns = 0; /* numero di spazi */
  int nt = 0; /* numero di tab */
  int nl = 0; /* numero di linee */

  while ( (c = getchar()) != EOF ) {
    switch(c) {
      case ' ':
        ns++;
        break;
      case '\t':
        nt++;
        break;
      case '\n':
        nl++;
        break;
      default:
        /* nothing to do */
        break;
    }
  }

  printf("Totale spazi: %d\n", ns);
  printf("Totale tabulazioni: %d\n", nt);
  printf("Totale linee lette: %d\n", nl);

  return 0;
}
