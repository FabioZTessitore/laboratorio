/* duemaggiori.c */

/* Determinare i due maggiori tra dieci numeri immessi */

/* Istruzioni per la compilazione e l'esecuzione:
$ make duemaggiori
$ ./duemaggiori
*/

#include <stdio.h>

int main()
{
  int counter;
  int number;
  int largest1, largest2;

  printf("Calcolo dei due maggiori\n");
  printf("Inserisci 10 valori\n");

  /* input primo valore */
  printf("Inserisci un numero: ");
  scanf("%d", &number);
  counter = 1;

  largest1 = number;

  /* l'input del secondo valore viene fatto
     fuori ciclo per impostare largest2
     al valore corretto */
  printf("Inserisci un numero: ");
  scanf("%d", &number);
  counter++;
  if (number > largest1) {
    largest2 = largest1;
    largest1 = number;
  } else {
    largest2 = number;
  }

  while (counter < 10) {
    printf("Inserisci un numero: ");
    scanf("%d", &number);
    counter++;

    if (number > largest1) {
      largest2 = largest1;
      largest1 = number;
    } else if (number > largest2) {
      largest2 = number;
    }
  }

  /* output */
  printf("The largest is: %d\n", largest1);
  printf("The second largest is: %d\n", largest2);

  return 0;
}
