/* maggiore2.c */

/* Stampa il maggiore tra due numeri dati in input */

#include <stdio.h>

int main()
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
