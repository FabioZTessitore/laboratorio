/* main.c */

/* Differenza di latitudini */

#include <stdio.h>
#include "diff_latitudine.h"
#include "latitudine.h"
#include "str_utils.h"

int main()
{
  Latitudine l1, l2;
  DiffLatitudine dl;
  char buffer[80];
  int status;

  printf("Differenza di Latitudine\n\n");

  do {
    printf("Inserisci prima latitudine. Es. 40 10 05N\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&l1, buffer);
  } while (status != 0);

  do {
    printf("\n\nInserisci seconda latitudine. Es. 40 10 05N\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&l2, buffer);
  } while (status != 0);

  dl = diff_latitudine(&l1, &l2);
  printf("Differenza: ");
  diff_latitudine_print(&dl);

  return 0;
}
