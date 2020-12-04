/* main.c */

/* Puntatori a funzioni */

/* Istruzioni per la compilazione e l'esecuzione:
$ make
$ ./main
*/

#include <stdio.h>
#include "myvect.h"
#include "myvect_utils.h"

/* printNum: stampa un numero intero passato per riferimento */
void printNum(int *num);

/* doubleNum: raddoppia un numero intero passato per riferimento */
void doubleNum(int *num);

int main()
{
  #define N 5
  int vett[N];

  printf("MyVect\n\n");

  myvect_init();

  printf("vett random in [0, 100[ ...\n");
  myvect_random(vett, N, 0, 100);

  printf("apply printNum ...\n");
  myvect_apply(vett, N, printNum);

  printf("\napply doubleNum ...\n");
  myvect_apply(vett, N, doubleNum);
  printf("apply printNum ...\n");
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
