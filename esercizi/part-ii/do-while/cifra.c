/* cifra.c */

/* Conta le occorrenze della cifra 7 */

#include <stdio.h>

int main()
{
  int num;
  int num_orig;

  /* cifra corrente */
  int c;

  /* output */
  int counter = 0;

  /* input */
  do {
    printf("Inserisci un numero: ");
    scanf("%d", &num);
  } while (num < 0);

  /* copia per stampa finale */
  num_orig = num;

  /* conta le occorrenze della cifra 7 */
  while (num > 0) {
    /* estrae una cifra */
    c = num % 10;

    if (c == 7) {
      counter++;
    }

    num /= 10;
  }

  printf("%d contiene %d occorrenze della cifra 7\n", num_orig, counter);

  return 0;
}
