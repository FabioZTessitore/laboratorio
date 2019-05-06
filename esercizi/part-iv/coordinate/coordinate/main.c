/* main.c */

/* Differenza di coordinate */

#include <stdio.h>
#include "coordinate.h"
#include "diff_latitudine.h"
#include "diff_longitudine.h"
#include "str_utils.h"

int main()
{
  Coordinate P_A, P_B;
  DiffLatitudine dlat;
  DiffLongitudine dlong;
  char buffer[80];
  int status;

  printf("Differenza di Coordinate\n\n");

  printf("Coordinate punto A\n");
  do {
    printf("Inserisci latitudine. Es. 40 10 05N\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&P_A.phi, buffer);
  } while (status != 0);
  do {
    printf("\n\nInserisci longitudine. Es. 20 40 05E\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = longitudine_parse(&P_A.lambda, buffer);
  } while (status != 0);

  printf("\n\nCoordinate punto B\n");
  do {
    printf("Inserisci latitudine. Es. 40 10 05N\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = latitudine_parse(&P_B.phi, buffer);
  } while (status != 0);

  do {
    printf("\n\nInserisci longitudine. Es. 20 40 05e\n");
    printf("? ");
    strSafeInput(buffer, 80);
    status = longitudine_parse(&P_B.lambda, buffer);
  } while (status != 0);

  dlat = diff_latitudine(&P_A.phi, &P_B.phi);
  dlong = diff_longitudine(&P_A.lambda, &P_B.lambda);
  printf("\n\nDifferenza Latitudine: ");
  diff_latitudine_print(&dlat);
  printf("Differenza Longitudine: ");
  diff_longitudine_print(&dlong);

  return 0;
}
