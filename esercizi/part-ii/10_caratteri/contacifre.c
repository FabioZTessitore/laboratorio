/* contacifre.c */

/* conta spaziature, cifre e altri caratteri */

/* istruzioni per la compilazione e l'esecuzione:
$ make contacifre
$ ./contacifre < test3.txt
*/

#include <stdio.h>

int main(void)
{
  int c;

  int n_white = 0;  /* numero di spaziature totali */
  int n_digits[10]; /* contatori per le cifre */
  int n_others = 0; /* altri */

  int i;

  /* azzera i contatori delle cifre */
  for (i = 0; i < 10; i++) {
    n_digits[i] = 0;
  }

  /* lettura dei caratteri */
  while ( (c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      n_white++;
    } else if (c >= '0' && c <= '9') {
      n_digits[c-'0']++;
    } else {
      n_others++;
    }
  }

  /* output */
  printf("Cifre:\n");
  for (i = 0; i < 10; i++) {
    printf("%d) %d\n", i, n_digits[i]);
  }
  printf("Spaziature: %d\n", n_white);
  printf("Altri caratteri: %d\n", n_others);

  return 0;
}
