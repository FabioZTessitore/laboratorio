/* main.c */

/* Simulazione del lancio di un dado a 6 facce */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./dado
 */

#include <stdio.h>
#include "dado.h"

void stampa_asterischi(int n);

int main()
{
  int trials = 100;
  int face[7];      /* 0 inutilizzato */
  int i;

  dado_init();

  printf("Lancio di un dado a 6 facce %d volte\n", trials);

  /* azzera i contatori */
  for (i = 1; i <= 6; i++) face[i] = 0;

  /* lancia e conta */
  for (i = 0; i < trials; i++) {
    face[dado_roll()]++;
  }

  /* stampa con linee di asterischi */
  for (i = 1; i <= 6; i++) {
    printf("#%02d)  [%d]  ", i, face[i]);
    stampa_asterischi(face[i]);
  }

  return 0;
}

void stampa_asterischi(int n)
{
  int i;

  for (i = 0; i < n; i++) {
    putchar('*');
  }
  putchar('\n');
}
