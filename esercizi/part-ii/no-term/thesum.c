/* thesum.c */

/* TheSum: somma un valore intero chiesto in input
 * ad uno letto in un file.
 *
 * Salva il risultato nel file
 */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c thesum.c -o thesum.o
 *
 * Link:
 * $ gcc thesum.o -o thesum
 *
 * Eseguire:
 * $ ./thesum
 */

#include <stdio.h>

int main()
{
  FILE *f;
  int sum = 0;
  int value = 0;

  f = fopen("sum.dat", "r");
  if (!f) {
    fprintf(stderr, "Impossibile aprire il file sum.dat\n");
    sum = 0;
  } else {
    printf("Lettura del file sum.dat in corso ...\n");
    fscanf(f, "%d", &sum);
    fclose(f);
  }
  printf("Valore corrente: %d\n\n", sum);

  printf("Inserisci il valore da sommare: ");
  scanf("%d", &value);

  sum += value;

  printf("\nNuovo valore: %d\n", sum);

  printf("Salvataggio nel file sum.dat in corso ...\n");
  f = fopen("sum.dat", "w");
  fprintf(f, "%d\n", sum);
  fclose(f);

  return 0;
}
