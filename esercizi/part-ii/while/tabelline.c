/* tabelline.c */

/* stampa la tabella pitagorica */

/* Istruzioni per la compilazione e l'esecuzione:
$ make tabelline
$ ./tabelline
*/

#include <stdio.h>

int main(void)
{
  int riga = 0;
  int colonna = 0;

  printf("Tabella Pitagorica\n\n");

  riga = 1;
  while (riga <= 10) {

    colonna = 1;
    while (colonna <= 10) {
      printf("%5d", riga*colonna);

      colonna++;
    }
    putchar('\n');

    riga++;
  }

  return 0;
}
