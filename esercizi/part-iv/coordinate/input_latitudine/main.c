/* main.c */

/* Input di latitudine nella forma
 *
 *  GG PP SS N|S
 *
 *  GG    gradi
 *  PP    minuti primi
 *  SS    minuti secondi
 *  N|S   Nord o Sud
 */

#include <stdio.h>
#include "latitudine.h"
#include "str_utils.h"

int main(void)
{
  Latitudine l;
  char buffer[80];
  int status;

  printf("Latitudine\n\n");

  printf("Inserisci una latitudine. Es. 40 10 05N\n\n");
  printf("? ");
  strSafeInput(buffer, 80);

  status = latitudine_parse(&l, buffer);
  if (status == 0) latitudine_print(&l);

  return 0;
}
