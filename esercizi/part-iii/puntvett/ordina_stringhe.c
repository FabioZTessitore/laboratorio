/* ordina_stringhe.c */

/* Ordina le stringhe contenute in un vettore di stringhe */

/* Istruzioni per la compilazione e l'esecuzione:
$ make ordina_stringhe
$ ./ordina_stringhe
*/

#include <stdio.h>

void bubble_sort(const char *v[], const int size);

int main()
{
  const char * semi[] = { "Cuori", "Quadri", "Fiori", "Picche" };
  int i;

  puts("Prima del riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  bubble_sort(semi, 4);

  puts("\nDopo il riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  return 0;
}

void bubble_sort(const char *v[], const int size)
{
  int pass;           /* passaggi */
  int i = 0;
  const char *temp;
  int scambio = 1;    /* 1: e' stato effettuato almeno uno scambio, continua;
                       * 0: nessuno scambio, il vettore e' ordinato.
                       */

  /* esegue un passaggio solo se c'e' stato uno scambio */
  for (pass = 1; pass < size && scambio; pass++) {

    /* ipotizza vettore ordinato */
    scambio = 0;

    /* ad ogni passaggio effettua un confronto in meno */
    for (i = 0; i < size-pass; i++) {
      /* confronta il primo carattere delle stringhe */
      if (*(v[i]) > *(v[i+1])) {
        scambio = 1;    /* avvisa */

        /* ed eventualmente scambia i puntatori */
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
      }
    }
  }
}
