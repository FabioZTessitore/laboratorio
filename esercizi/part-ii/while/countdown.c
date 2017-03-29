/* countdown.c */

/* il conto alla rovescia */

/* Istruzioni per la compilazione e l'esecuzione:
$ make countdown
$ ./countdown
*/

#include <stdio.h>

int main()
{
  int contatore = 0;

  printf("Conto alla rovescia\n\n");
  printf("Da che numero devo partire? ");
  scanf("%d", &contatore);

  printf("\n\n");

  while (contatore > 0) {
    printf("%d\n", contatore);
    contatore--;
  }

  printf("Lanciato!\n");

  return 0;
}
