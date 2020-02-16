/* input_from_string.c */

/* legge un int e un double da una stringa e li moltiplica */

#include <stdio.h>

int main(void)
{
  char str[] = "2 3.4";
  int num1;
  double num2;
  double result;

  puts("Input da una stringa\n");

  printf("Stringa iniziale: \"%s\"\n\n", str);

  sscanf(str, "%d %lf", &num1, &num2);
  result = num1 * num2;
  printf("Risultato: %.6f\n", result);

  return 0;
}
