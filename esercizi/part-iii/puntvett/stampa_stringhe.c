/* stampa_stringhe.c */

/* Stampa le stringhe contenute in un vettore di stringhe */

/* Istruzioni per la compilazione e l'esecuzione:
$ make stampa_stringhe
$ ./stampa_stringhe
*/

#include <stdio.h>

int main(void)
{
  const char * const semi[] = { "Cuori", "Quadri", "Fiori", "Picche" };
  int i;

  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  return 0;
}
