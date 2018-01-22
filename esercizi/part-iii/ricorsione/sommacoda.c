/* sommacoda.c */

/* somma due interi mediante una funzione ricorsiva.
 * utilizza ricorsione in coda.
 */

#include <stdio.h>

int somma_helper(int x, int y, int parziale);
int somma(int x, int y);

int main()
{
  int a, b;

  printf("Effettua la somma tra due numeri non negativi\n\n");

  do {
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
  } while (a < 0);

  do {
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
  } while (b < 0);

  printf("La somma di %d e %d e' pari a %d\n", a, b, somma(a, b));

  return 0;
}

int somma_helper(int x, int y, int parziale)
{
  if (y == 0) return x + parziale;

  return somma_helper(x, y-1, parziale+1);
}

int somma(int x, int y)
{
  return somma_helper(x, y, 0);
}
