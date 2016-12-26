/* maggiore2.c */

/* Stampa il maggiore tra due numeri dati in input */

#include <stdio.h>

int main()
{
  /* variabili di input */
  int num1, num2;

  /* input */
  printf("Inserisci un intero: ");
  scanf("%d", &num1);
  printf("Inserisci un altro intero: ");
  scanf("%d", &num2);

  /* compara e stampa */
  if (num1 > num2) {
    printf("Il maggiore e' %d\n", num1);
  } else if (num2 > num1) {
    printf("Il maggiore e' %d\n", num2);
  } else {
    printf("Numeri uguali.\n");
  }

  return 0;
}
