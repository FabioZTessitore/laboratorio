/* binario.c */

/* Converte un numero binario in decimale */

/* Istruzioni per la compilazione e l'esecuzione:
$ make binario
$ ./binario
*/

#include <stdio.h>

int main(void)
{
  /* input, un numero binario */
  int bin;
  int bin_backup;

  /* cifra corrente */
  int c;

  /* peso della cifra corrente */
  int w = 1;

  /* output, valore decimale */
  int dec = 0;

  int is_binary;

  /* input e controllo che sia binario */
  do {
    is_binary = 1;

    /* input */
    printf("Inserisci un numero binario: ");
    scanf("%d", &bin);
    bin_backup = bin;

    /* controlla che sia composto solo di 0/1 */
    while (bin != 0 && is_binary) {
      c = bin % 10;
      bin /= 10;

      if (c != 0 && c != 1) {
        is_binary = 0;
      }
    }
  } while (!is_binary);

  /* ripristina */
  bin = bin_backup;

  /* estrae le cifre dalla meno significativa,
     ne calcola il valore e lo aggiunge al totale */
  while (bin > 0) {
    c = bin % 10;
    bin /= 10;

    dec += c*w;

    w *= 2;
  }

  printf("%d(2) = %d(10)\n", bin_backup, dec);

  return 0;
}
