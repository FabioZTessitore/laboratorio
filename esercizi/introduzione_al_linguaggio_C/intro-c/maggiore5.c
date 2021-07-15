/* maggiore5.c */

/* Stampa il maggiore tra cinque numeri dati in input */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c maggiore5.c -o maggiore5.o
 *
 * Link:
 * $ gcc maggiore5.o -o maggiore5
 *
 * Esecuzione:
 * $ ./maggiore5
 */

#include <stdio.h>

int main(void)
{
  /* variabili di input */
  int num1, num2, num3, num4, num5;

  /* variabili di output */
  int massimo;

  /* input */
  printf("Inserisci cinque interi: ");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  /* determina il maggiore */
  massimo = num1;
  if (num2 > massimo) massimo = num2;
  if (num3 > massimo) massimo = num3;
  if (num4 > massimo) massimo = num4;
  if (num5 > massimo) massimo = num5;

  /* output */
  printf("Il massimo e' %d\n", massimo);

  return 0;
}
