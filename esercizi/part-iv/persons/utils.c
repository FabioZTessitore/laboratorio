/* utils.c */

#include <stdio.h>
#include <string.h>

void strSafeCopy(char *dst, const char * const src, const int maxLen)
{
  strncpy(dst, src, maxLen);
  dst[maxLen-1] = '\0';
}

void strSafeInput(char *str, int size)
{
  int len = 0;

  char *result = fgets(str, size, stdin);
  if (result == NULL) {
    str[0] = '\0';
    return;
  }

  /* elimina newline */
  len = strlen(str);
  if (str[len-1] == '\n') str[len-1] = '\0';
}
