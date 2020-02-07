/* invertecifre.c */

/* Inverte le cifre di un numero intero */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make invertecifre
 * $ ./invertecifre
 */

#include <stdio.h>

int inverti_cifre(int num);

int main(void)
{
  int n;

  puts("Inverte Cifre");

  printf("\nInserisci un numero: ");
  scanf("%d", &n);

  n = inverti_cifre(n);

  printf("A cifre invertite: %d\n", n);

  return 0;
}

int inverti_cifre(int num)
{
  int result = 0;
  int cifra;

  while (num) {
    /* estrae ultima cifra di num */
    cifra = num % 10;
    num /= 10;

    /* costruisce il risultato facendo scalare a sinistra */
    result = result*10 + cifra;
  }

  return result;
}
