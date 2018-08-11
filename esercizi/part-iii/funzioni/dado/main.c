/* main.c */

/* Simulazione del lancio di un dado a 6 facce */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./dado
 */

#include <stdio.h>
#include "dado.h"

int main()
{
  int trials = 100;
  int face[7];      /* 0 inutilizzato */
  int i, k;

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
    printf("#%d)  [%d]  ", i, face[i]);
    for (k = 0; k < face[i]; k++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
