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
 * a contiene l'indirizzo del dato passato &s1
 * b contiene l'indirizzo del dato passato &s2
 * (*a) e (*b) contengono i dati s1 e s2
 * In questo caso s1 ed s2 sono stringhe (e quindi puntatori)
 * quindi
 * a contiene l'indirizzo del puntatore alla prima stringa
 * b contiene l'indirizzo del puntatore alla seconda stringa
 * (*a) e' il puntatore alla prima stringa
 * (*b) e' il puntatore alla seconda stringa
 * (**a) e' il primo carattere della prima stringa
 * (**b) e' il primo carattere della seconda stringa
 */
int compare(const void *a, const void *b)
{
  const char **ppa = (const char **)a;
  const char **ppb = (const char **)b;

  /*
  printf("\nConfronto tra %s e %s\n", *ppa, *ppb);
  printf("Risultato: %d\n", **ppa-**ppb);
  */

  /* confronta solo il primo caratere!
   *
   * se *ppa e' un puntatore a stringa, **ppa e'
   * il primo carattere della stringa stessa.
   */
  return **ppa - **ppb;
}
