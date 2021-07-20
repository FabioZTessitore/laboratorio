/* cifra.c */

/* Conta le occorrenze della cifra 7 nel numero dato in input */

/* Istruzioni per la compilazione e l'esecuzione:
$ make cifra
$ ./cifra
*/

#include <stdio.h>

int main(void)
{
  int num;          /* numero in input */
  int num_backup;   /* copia di backup per la stampa finale */

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
  num_backup = num;

  /* conta le occorrenze della cifra 7 */
  while (num > 0) {
    /* estrae una cifra */
    c = num % 10;

    if (c == 7) {
      counter++;
    }

    num /= 10;
  }

  printf("%d contiene %d occorrenze della cifra 7\n", num_backup, counter);

  return 0;
}
