/* sumvett.c */

/* Calcola la somma e la media di dieci interi memorizzati in un vettore */

/* Istruzioni per la compilazione e l'esecuzione:
$ make sumvett
$ ./sumvett
*/

#include <stdio.h>

int main()
{
  int numbers[10];
  int somma;
  double media;
  int i;

  printf("Somma e Media\n\n");

  /* input */
  printf("Inserisci dieci valori interi:\n");
  for (i = 0; i < 10; i++) {
    printf("? ");
    scanf("%d", &numbers[i]);
  }

  /* calcolo */
  somma = 0;
  media = 0.;
  for (i = 0; i < 10; i++) {
    somma += numbers[i];
  }
  media = (double)somma / 10.0;

  /* output */
  printf("\nDati iniziali:\n");
  for (i = 0; i < 10; i++) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }
  printf("\nSomma: %d\n", somma);
  printf("Media: %.2f\n", media);

  return 0;
}
