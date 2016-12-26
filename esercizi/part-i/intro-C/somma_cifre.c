/* somma_cifre.c */

/* Prende in input un numero di tre cifre
   e ne stampa la somma.
*/

#include <stdio.h>

int main()
{
  /* variabile di input, un intero (di tre cifre) */
  int num;

  /* variabili di lavoro, le cifre */
  int c1, c2, c3;

  /* variabile di output, le somma delle cifre */
  int somma;

  /* input */
  printf("Inserisci un numero di tre cifre: ");
  scanf("%d", &num);

  if (num < 0 || num > 999) {
    printf("Non hai inserito un numero di tre cifre. Bye\n");
  } else {
    /* estrae le cifre */
    c3 = num % 10;
    num = num / 10;
    c2 = num % 10;
    num = num / 10;
    c1 = num % 10;

    somma = c1 + c2 + c3;

    /* output */
    printf("La somma delle cifre e' %d\n", somma);
  }

  return 0;
}
