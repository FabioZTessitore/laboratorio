/* sumvett.c */

/* Calcola la somma e la media di tre interi memorizzati in un vettore */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c sumvett.c -o sumvett.o
 *
 * Link:
 * $ gcc sumvett.o -o sumvett
 *
 * Esecuzione:
 * $ ./sumvett
 */

#include <stdio.h>

int main(void)
{
  int numbers[3];
  int somma;
  double media;

  printf("Somma e Media\n\n");

  /* input */
  printf("Inserisci tre valori interi:\n");
  printf("? ");
  scanf("%d", &numbers[0]);
  printf("? ");
  scanf("%d", &numbers[1]);
  printf("? ");
  scanf("%d", &numbers[2]);

  /* calcolo */
  somma = numbers[0] + numbers[1] + numbers[2];
  media = (double)somma / 3.0;

  /* output */
  printf("\nDati iniziali:\n");
  printf("numbers[0] = %d\n", numbers[0]);
  printf("numbers[1] = %d\n", numbers[1]);
  printf("numbers[2] = %d\n\n", numbers[2]);

  printf("Somma: %d\n", somma);
  printf("Media: %f\n", media);

  return 0;
}
