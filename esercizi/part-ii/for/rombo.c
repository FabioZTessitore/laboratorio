/* rombo.c */

/* Disegna un rombo */

/* Istruzioni per la compilazione e l'esecuzione:
$ make rombo
$ ./rombo
*/

#include <stdio.h>

int main()
{
  /* righe del rombo (dispari da 1 a 19) */
  int n;

  /* contatori */
  int row_counter, star_counter, blank_counter;

  printf("Rombo\n\n");

  do {
    printf("Numero di righe (dispari 1-19): ");
    scanf("%d", &n);
  } while (n < 1 || n > 19 || n % 2 == 0);

  /* parte superiore */
  for (row_counter = 0; row_counter < n/2; row_counter++) {
    for (blank_counter = 1; blank_counter < n/2-row_counter+1; blank_counter++) putchar(' ');
    for (star_counter = 1; star_counter <= 2*row_counter+1; star_counter++) putchar('*');
    putchar('\n');
  }
  /* riga centrale */
  for (star_counter = 1; star_counter <= n; star_counter++) putchar('*');
  putchar('\n');
  /* parte inferiore */
  for (row_counter = 0; row_counter < n/2; row_counter++) {
    for (blank_counter = 1; blank_counter <= row_counter+1; blank_counter++) putchar(' ');
    for (star_counter = 1; star_counter < n-(2*row_counter+1); star_counter++) putchar('*');
    putchar('\n');
  }
  putchar('\n');

  return 0;
}
