/* qsort_stringhe.c */

/* Ordina le stringhe contenute in un vettore di stringhe tramite qsort() */

/* Istruzioni per la compilazione e l'esecuzione:
$ make qsort_stringhe
$ ./qsort_stringhe
*/

#include <stdio.h>
#include <stdlib.h>

/* il prototipo della funzione di confronto e' obbligato */
int compare(const void *a, const void* b);

int main(void)
{
  const char *semi[] = { "Cuori", "Quadri", "Fiori", "Picche" };
  int i;

  puts("Prima del riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  qsort(semi, 4, sizeof(char*), compare);

  puts("\nDopo il riordino");
  for (i = 0; i < 4; i++) {
    puts(semi[i]);
  }

  return 0;
}

/* a e b sono dichiarati const void * perche'
 * sono puntatori generici, ma in questo caso
 * contengono gli indirizzi delle stringhe.
 * Il cast deve quindi essere effettuato a char*
 */
int compare(const void *a, const void* b)
{
  const char *pa = (const char*)a;
  const char *pb = (const char*)b;

  /* se pa e' un puntatore a stringa, *pa e'
   * il primo carattere della stringa stessa.
   */
  return *pa - *pb;
}
