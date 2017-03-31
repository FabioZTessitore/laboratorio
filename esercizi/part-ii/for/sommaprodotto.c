/* sommaprodotto.c */

/* Calcola e visualizza la somma degli interi pari da 2 a 30 */
/* Calcola e visualizza il prodotto dei dispari da 1 a 15 */

#include <stdio.h>

int main()
{
  int i;
  int somma = 0, prodotto = 1;

  for (i = 2; i <= 30; i += 2) {
    somma += i;
  }

  for (i = 1; i <= 15; i += 2) {
    prodotto *= i;
  }

  printf("Somma dei numeri pari da 2 a 30: %d\n", somma);
  printf("Prodotto dei numeri dispari da 1 a 15: %d\n", prodotto);

  return 0;
}
