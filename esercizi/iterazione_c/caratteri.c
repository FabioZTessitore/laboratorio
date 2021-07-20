/* caratteri.c */

/* stampa i caratteri di una stringa */

/* Istruzioni per la compilazione e l'esecuzione:
$ make caratteri
$ ./caratteri
*/

#include <stdio.h>

int main(void)
{
  char saluto[] = "Salve a tutti!";
  int i;

  printf("Stringa iniziale: ");
  puts(saluto);

  printf("\nCaratteri:\n");
  i = 0;
  while (saluto[i] != '\0') {
    printf("%c\n", saluto[i]);
    i++;
  }

  return 0;
}
