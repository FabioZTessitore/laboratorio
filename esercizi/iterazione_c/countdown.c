/* countdown.c */

/* il conto alla rovescia */

/* Istruzioni per la compilazione e l'esecuzione:
$ make countdown
$ ./countdown
*/

#include <stdio.h>

int main(void)
{
  int contatore = 0;

  printf("Conto alla rovescia\n\n");

  printf("Da che numero devo partire? ");
  scanf("%d", &contatore);

  if (contatore <= 0) {
    printf("Inserire un numero positivo.\nBye");
    return 0;
  }

  printf("\n\n");

  while (contatore > 0) {
    printf("%d\n", contatore);

    contatore--;
  }

  printf("Lanciato!\n");

  return 0;
}
