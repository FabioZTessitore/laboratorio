/* utils.c */

#include <stdio.h>
#include <string.h>
#include "utils.h"

void strSafeCopy(char *dst, const char * const src, const int dstSize)
{
  strncpy(dst, src, dstSize);
  dst[dstSize-1] = '\0';
}

void strSafeInput(char *str, int size)
{
  int len = 0;
  int temp;

  /* legge i primi 'size' caratteri */
  char *result = fgets(str, size, stdin);
  
  if (result == NULL) {
    str[0] = '\0';
    return;
  }

  len = strlen(str);

  /* se non e' stato letto il newline
   * (stringa di ingresso di lunghezza maggiore di 'size'),
   * pulisce il buffer di input
   */
  if (str[len-1] != '\n') {
    while ( (temp=getchar()) != '\n' )
      ;
  }
  
  /* elimina newline */
  if (len > 0 && str[len-1] == '\n') str[len-1] = '\0';
}
