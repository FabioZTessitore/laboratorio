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

int main()
{
  Latitudine l;
  char buffer[80];

  printf("Latitudine\n\n");
  printf("Inserisci una latitudine. Es. 40 10 05N\n\n");

  fgets(buffer, 80, stdin);
  buffer[79] = '\0';

  int status = latitudine_parse(&l, buffer);
  if (status == 0) latitudine_print(&l);

  return 0;
}
