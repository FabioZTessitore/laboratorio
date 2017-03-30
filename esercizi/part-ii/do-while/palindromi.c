/* palindromi.c */

/* Determinare se un numero di cinque cifre e' palindromo */

#include <stdio.h>

int main()
{
  int num = -1;

  /* cifre del numero, c3 non usata */
  int c1, c2, c4, c5;

  /* input */
  do {
    printf("Inserisci un numero di cinque cifre: ");
    scanf("%d", &num);
  } while (num < 0 || num > 99999);

  /* estrae le cifre */
  c5 = num % 10;
  num /= 10;

  c4 = num % 10;
  num /= 10;

  /* salta la terza cifra */
  /* c3 = num % 10; */
  num /= 10;

  c2 = num % 10;
  num /= 10;

  c1 = num;

  /* output */
  if (c1==c5 && c2==c4) {
    printf("E' palindromo\n");
  } else {
    printf("Non e' palindromo\n");
  }

  return 0;
}
