/* vettori.c */

/* Esperimento con vettori e indirizzi */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c vettori.c -o vettori.o
 *
 * Link:
 * $ gcc vettori.o -o vettori
 *
 * Esecuzione:
 * $ ./vettori
 */

#include <stdio.h>

int main(void)
{
  int vett[5];
  int distanza;

  printf("indirizzo di vett[1]: %p\n", &vett[1]);
  printf("indirizzo di vett[2]: %p\n", &vett[2]);

  distanza = &vett[2] - &vett[1];
  printf("vett[1] e vett[2] distano %d unita'\n", distanza);

  printf("Dimensione di un intero: %d byte\n", sizeof(int));

  return 0;
}
