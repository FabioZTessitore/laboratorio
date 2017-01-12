/* address.c */

/* Puntatori e indirizzi */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c address.c -o address.o
 *
 * Link:
 * $ gcc address.o -o address
 *
 * Eseguire:
 * $ ./address
 */

#include <stdio.h>

int main()
{
  float num;
  float *p_num;

  /* memorizzazione dell'indirizzo di num */
  p_num = &num;

  /* output */
  printf("num address is: %p\n", p_num);

  return 0;
}
