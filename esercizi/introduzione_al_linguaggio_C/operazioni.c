// operazioni.c

// Esegue le cinque operazioni elementari su due interi dati in input

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -std=c11 -c operazioni.c -o operazioni.o
 *
 * Link:
 * $ gcc operazioni.o -o operazioni
 *
 * Esecuzione:
 * $ ./operazioni
 */

#include <stdio.h>

int main(void)
{
  // variabili di input
  int num1, num2;

  // variabili di output
  int somma, differenza, prodotto, quoziente, resto;

  // input
  printf("%s", "Inserisci un intero: ");
  scanf("%d", &num1);
  printf("%s", "Inserisci un altro intero: ");
  scanf("%d", &num2);

  // calcolo
  somma = num1 + num2;
  differenza = num1 - num2;
  prodotto = num1 * num2;
  quoziente = num1 / num2;
  resto = num1 % num2;

  // output
  printf("%d + %d = %d\n", num1, num2, somma);
  printf("%d - %d = %d\n", num1, num2, differenza);
  printf("%d * %d = %d\n", num1, num2, prodotto);
  printf("%d / %d = %d\n", num1, num2, quoziente);
  printf("%d %% %d = %d\n", num1, num2, resto);
}
