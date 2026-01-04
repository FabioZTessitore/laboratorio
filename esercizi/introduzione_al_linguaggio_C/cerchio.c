// cerchio.c

// Stampa circonferenza e superficie di un cerchio dato il raggio (intero)

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -std=c11 -c cerchio.c -o cerchio.o
 *
 * Link:
 * $ gcc cerchio.o -o cerchio
 *
 * Esecuzione:
 * $ ./cerchio
 */

#include <stdio.h>

int main(void)
{
  // costanti utili
  double pi = 3.14159;

  // variabili di input
  int raggio;

  // input
  printf("%s", "Raggio del cerchio (intero): ");
  scanf("%d", &raggio);

  /* calcola e stampa */
  printf("Diametro: %f\n", raggio * 2.0);
  printf("Circonferenza: %f\n", 2.0 * pi * raggio);
  printf("Superficie: %f\n", pi * raggio * raggio);
}
