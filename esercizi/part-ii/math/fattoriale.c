/* fattoriale.c */

/* Calcola il fattoriale */

#include <stdio.h>

int main()
{
  int n;
  int fatt = 1;
  int counter = 1;

  printf("Calcola il fattoriale\n\n");

  /* input */
  do {
    printf("Inserisci un intero non negativo: ");
    scanf("%d", &n);
  } while (n < 0);

  /* calcola il fattoriale */
  for (counter = 2; counter <= n; counter++) {
    fatt *= counter;
  }

  printf("%d! = %d\n", n, fatt);

  return 0;
}
