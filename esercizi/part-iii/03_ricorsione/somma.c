/* somma.c */

/* somma due interi mediante una funzione ricorsiva */

/* istruzioni per la compilazione e l'esecuzione:
$ make somma
$ ./somma
*/

#include <stdio.h>

int somma(int x, int y);

int main(void)
{
  int a, b;

  printf("Effettua la somma tra due numeri\n\n");

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  do {
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
  } while (b < 0);

  printf("La somma di %d e %d e' pari a %d\n", a, b, somma(a, b));

  return 0;
}

int somma(int x, int y)
{
  if (y==0) return x;

  return 1 + somma(x, y-1);
}
