/* maiuscole_minuscole.c */

/* Data una stringa,
    se non contiene cifre la stampa in maiuscolo
    altrimenti in minuscolo (mantenendo le cifre)
*/

#include <stdio.h>
#include <ctype.h>

int has_digit(const char *s);
void print_in_lowercase(const char *s);
void print_in_uppercase(const char *s);

int main()
{
  char s[] = "abcDEF123qwerty";

  puts("Lettere maiuscole e minuscole\n");

  printf("Stringa iniziale: %s\n\n", s);

  if (has_digit(s)) {
    puts("La stringa iniziale contiene almeno una cifra");
    printf("In maiuscolo: ");
    print_in_uppercase(s);
  } else {
    puts("La stringa iniziale non contiene cifre");
    printf("In minuscolo: ");
    print_in_lowercase(s);
  }

  putchar('\n');

  return 0;
}

int has_digit(const char *s)
{
  while (*s) {
    if (isdigit(*s))  return 1;
    s++;
  }

  return 0;
}

void print_in_lowercase(const char *s)
{
  while (*s) {
    putchar(tolower(*s));
    s++;
  }
}

void print_in_uppercase(const char *s)
{
  while (*s) {
    putchar(toupper(*s));
    s++;
  }
}
