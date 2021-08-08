/* qsort_stringhe.c */

/* Ordina le stringhe contenute in un vettore di stringhe tramite qsort() */

/* Istruzioni per la compilazione e l'esecuzione:
$ make qsort_stringhe
$ ./qsort_stringhe
*/

#include <stdio.h>
#include <stdlib.h>

/* il prototipo della funzione di confronto */
int compare(const void *a, const void *b);

int main(void)
{
  const char *semi[] = { "Cuori", "Quadri", "Fiori", "Picche" };
  int i;

  puts("Prima del riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  qsort(semi, 4, sizeof(char *), compare);

  puts("\nDopo il riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  return 0;
}

/* a e b sono dichiarati (const void *) perche'
 * sono puntatori generici, ma in questo caso
 * contengono gli indirizzi dei puntatori alle stringhe.
 * Il cast deve quindi essere effettuato a (const char **)
 *
 * a contiene l'indirizzo del dato passato &s1 (indirizzo del puntatore)
 * b contiene l'indirizzo del dato passato &s2 (indirizzo del puntatore)
 * (*a) e (*b) contengono i dati s1 e s2 (puntatori a char, quindi le stringhe)
 */
int compare(const void *a, const void *b)
{
  const char **ppa = (const char **)a;
  const char **ppb = (const char **)b;

  printf("\nConfronto tra %s e %s\n", *ppa, *ppb);
  printf("Risultato: %d\n", **ppa-**ppb);

  /* confronta solo il primo caratere!
   *
   * se *ppa e' un puntatore a stringa, **ppa e'
   * il primo carattere della stringa stessa.
   */
  return **ppa - **ppb;
}