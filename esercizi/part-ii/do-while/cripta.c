/* cripta.c */

/* Legge un intero di quattro cifre.
   Lo trasforma scambiando ogni cifra con
   (cifra + 7) % 10.
   Poi scambia la prima cifra con la terza
   e la seconda con la quarta.
*/

#include <stdio.h>

int main()
{
  int num;
  int temp;
  int c1, c2, c3, c4;

  /* input numero a quattro cifre */
  do {
    printf("Inserisci un numero di quattro cifre: ");
    scanf("%d", &num);
  } while (num < 0 || num > 9999);

  printf("\nNumero da crittografare: %04d\n", num);

  /* estrae le cifre */
  c1 = num % 10;
  num /= 10;
  c2 = num % 10;
  num /= 10;
  c3 = num % 10;
  num /= 10;
  c4 = num % 10;

  /* le trasforma */
  c1 = (c1+7) % 10;
  c2 = (c2+7) % 10;
  c3 = (c3+7) % 10;
  c4 = (c4+7) % 10;

  /* e le scambia */
  temp = c1;
  c1 = c3;
  c3 = temp;

  temp = c2;
  c2 = c4;
  c4 = temp;

  /* crea il numero crittografato */
  num = c4 * 1000 + c3 * 100 + c2 * 10 + c1;

  printf("Numero crittografato: %04d\n", num);

  return 0;
}
