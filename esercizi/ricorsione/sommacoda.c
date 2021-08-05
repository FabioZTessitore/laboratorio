/* sommacoda.c */

/* Somma due interi mediante una funzione ricorsiva.
 * Utilizza ricorsione in coda.
 */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make sommacoda
 $ ./sommacoda
 */

#include <stdio.h>

int somma(int x, int y);
int somma_helper(int x, int y, int parziale);

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
  return somma_helper(x, y, 0);
}

int somma_helper(int x, int y, int parziale)
{
  if (y == 0) return x + parziale;

  return somma_helper(x, y-1, parziale+1);
}
