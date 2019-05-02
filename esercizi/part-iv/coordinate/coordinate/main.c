/* main.c */

/* Differenza di coordinate */

#include <stdio.h>
#include "diff_latitudine.h"
#include "diff_longitudine.h"
#include "latitudine.h"
#include "longitudine.h"
#include "str_utils.h"

int main()
{
  Latitudine lat1, lat2;
  Longitudine long1, long2;
  DiffLatitudine dlat;
  DiffLongitudine dlong;
  char buffer[80];
  int status;

  printf("Differenza di Coordinate\n\n");

  do {
    printf("Inserisci prima latitudine. Es. 40 10 05N\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&lat1, buffer);
  } while (status != 0);

  do {
    printf("Inserisci prima longitudine. Es. 20 40 05E\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = longitudine_parse(&long1, buffer);
  } while (status != 0);

  do {
    printf("\n\nInserisci seconda latitudine. Es. 40 10 05N\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&lat2, buffer);
  } while (status != 0);

  do {
    printf("\n\nInserisci seconda longitudine. Es. 20 40 05e\n\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = longitudine_parse(&long2, buffer);
  } while (status != 0);

  dlat = diff_latitudine(&lat1, &lat2);
  dlong = diff_longitudine(&long1, &long2);
  printf("Differenza: ");
  diff_latitudine_print(&dlat);
  putchar('\n');
  diff_longitudine_print(&dlong);

  return 0;
}
