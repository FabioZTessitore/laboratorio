/* contavocali.c */

/* conta le vocali (totale) */

/* istruzioni per la compilazione e l'esecuzione:

$ make contavocali

$ ./contavocali < testo.txt

*/

#include <stdio.h>

int main()
{
  int c;
  int n_vocali = 0; /* numero di vocali */

  while ( (c = getchar()) != EOF) {
    switch(c) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        n_vocali++;
        break;
      default:
        /* nothing to do */
        break;
    }
  }

  printf("Totale vocali: %d\n", n_vocali);

  return 0;
}
