/* main.c */

/* Confronto tra metodi di ordinamento */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myvect.h"
#include "myvect_utils.h"

/* printNum: stampa un numero intero passato per riferimento */
void printNum(int *num);

/* doubleNum: raddoppia un numero intero passato per riferimento */
void doubleNum(int *num);

int main()
{
  int N = 5;
  int vett[N];
  int i;

  printf("MyVect\n\n");

  myvect_init();

  myvect_random(vett, N, 0, 100);

  myvect_apply(vett, N, printNum);

  printf("\nRaddoppia ...\n\n");
  myvect_apply(vett, N, doubleNum);
  myvect_apply(vett, N, printNum);

  return 0;
}

void printNum(int *num)
{
  printf("%d\n", *num);
}

void doubleNum(int *num)
{
  *num *= 2;
}
