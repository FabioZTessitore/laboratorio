/* massimo.c */

/* Determinare il maggiore tra dieci numeri immessi.*/

/* Istruzioni per la compilazione e l'esecuzione:
$ make massimo
$ ./massimo
*/

#include <stdio.h>

int main()
{
  int counter;
  int number;
  int largest;

  printf("Calcolo del massimo\n");
  printf("Inserisci 10 valori\n");

  /* input primo valore */
  printf("Inserisci un numero: ");
  scanf("%d", &number);
  counter = 1;

  /* inizializza */
  largest = number;

  while (counter < 10) {
    printf("Inserisci un numero: ");
    scanf("%d", &number);
    counter++;

    if (number > largest) largest = number;
  }

  /* output */
  printf("The largest is: %d\n", largest);

  return 0;
}
