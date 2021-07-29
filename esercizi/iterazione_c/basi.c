/* basi.c */

/* Tabella di conversione decimale, binario, ottale, esadecimale */

/* Istruzioni per la compilazione e l'esecuzione:
$ make basi
$ ./basi
*/

#include <stdio.h>

int main(void)
{
  int counter;          /* i numeri da 0 a 255 */
  int n;
  int i;

  int current_bit;
  int current_weight;

  /* Intestazione tabella */
  printf("%5s%10s%5s%4s\n", "N", "Bin", "Oct", "Hex");

  for (counter = 0; counter < 256; counter++) {
    printf("%5d  ", counter);

    /* conversione in binario */
    /* le cifre vanno stampate da sinistra a destra,
     * ma sapendo che si arriva fino a 255
     * e' noto il numero di cifre necessarie
     * e quindi il peso da cui partire */
    current_weight = 128;
    n = counter;
    for (i = 0; i < 8; i++) {
      current_bit = n/current_weight;
      printf("%d", current_bit);
      n -= current_bit*current_weight;
      current_weight /= 2;
    }

    printf("  ");

    /* conversione in ottale */
    current_weight = 64;
    n = counter;
    for (i = 0; i < 3; i++) {
      current_bit = n/current_weight;
      printf("%d", current_bit);
      n -= current_bit*current_weight;
      current_weight /= 8;
    }

    printf("  ");

    /* conversione in esadecimale */
    current_weight = 16;
    n = counter;
    for (i = 0; i < 2; i++) {
      current_bit = n/current_weight;
      switch(current_bit) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          printf("%d", current_bit);
          break;
        case 10:
          putchar('A');
          break;
        case 11:
          putchar('B');
          break;
        case 12:
          putchar('C');
          break;
        case 13:
          putchar('D');
          break;
        case 14:
          putchar('E');
          break;
        case 15:
          putchar('F');
          break;
        default:
          putchar('-');
          break;
      }
      n -= current_bit*current_weight;
      current_weight /= 16;
    }

    putchar('\n');
  }

  return 0;
}
