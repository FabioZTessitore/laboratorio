/* decripta.c */

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

  printf("\nNumero da decrittografare: %04d\n", num);

  /* estrae le cifre */
  c1 = num % 10;
  num /= 10;
  c2 = num % 10;
  num /= 10;
  c3 = num % 10;
  num /= 10;
  c4 = num % 10;

  /* prima scambia e poi trasforma */
  temp = c1;
  c1 = c3;
  c3 = temp;

  temp = c2;
  c2 = c4;
  c4 = temp;

  c1 = (c1+3) % 10;
  c2 = (c2+3) % 10;
  c3 = (c3+3) % 10;
  c4 = (c4+3) % 10;

  /* ricrea il numero originale */
  num = c4 * 1000 + c3 * 100 + c2 * 10 + c1;

  printf("Numero originale: %04d\n", num);

  return 0;
}
