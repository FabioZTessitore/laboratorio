/* reverse.c */

/* stampa le cifre di un numero al contrario mediante una funzione ricorsiva */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make reverse
 $ ./reverse
 */

#include <stdio.h>

void inverti_cifre(int n);

int main(void)
{
  int num;

  printf("Inserisci un numero e io ne stampero'\n"
        "le cifre al contrario. Es. 123 -> 321\n\n");

  do {
    printf(" ? ");
    scanf("%d", &num);
  } while (num < 0);

  printf("%d -> ", num);
  inverti_cifre(num);
  putchar('\n');

  return 0;
}

void inverti_cifre(int n)
{
  if (n == 0) return;

  /* stampa l'ultima cifra */
  printf("%d", n%10);

  /* e quindi le altre al contrario */
  inverti_cifre(n/10);
}
