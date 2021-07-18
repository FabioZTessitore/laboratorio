/* maggiore2.c */

/* Stampa il maggiore tra due numeri dati in input */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c maggiore2.c -o maggiore2.o
 *
 * Link:
 * $ gcc maggiore2.o -o maggiore2
 *
 * Esecuzione:
 * $ ./maggiore2
 */

#include <stdio.h>

int main(void)
{
  /* variabili di input */
  int num1, num2;

  /* e di output */
  int massimo;

  /* input */
  printf("Inserisci un intero: ");
  scanf("%d", &num1);
  printf("Inserisci un altro intero: ");
  scanf("%d", &num2);

  /* compara e stampa */
  massimo = num1;
  if (num2 > massimo) massimo = num2;

  printf("Il maggiore e' %d\n", massimo);

  return 0;
}
