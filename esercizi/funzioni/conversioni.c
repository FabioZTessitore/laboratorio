/* conversioni.c */

/* Conversioni di base, da decimale a binario, ottale o esadecimale */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make conversioni
 * $ ./conversioni
 */

#include <stdio.h>

/* stampa menu */
int menu(void);

/* conversioni di base */
void converti_in_binario(int num);
void converti_in_ottale(int num);
void converti_in_esadecimale(int num);

int main(void)
{
  /* scelta effettuata, indica il tipo di conversione da effettuare */
  int scelta = 0;

  /* numero da convertire */
  int num = 0;

  printf("Conversione da decimale a binario, ottale ed esadecimale\n\n");

  do {
    printf("Inserisci il numero da convertire (0-255): ");
    scanf("%d", &num);
  } while (num<0 || num>255);

  scelta = menu();   /* scelte valide: 1, 2, 3 */

  printf("\n%d (10) = ", num);

  switch(scelta) {
    case 1:
      converti_in_binario(num);
      break;
    case 2:
      converti_in_ottale(num);
      break;
    case 3:
      converti_in_esadecimale(num);
      break;
    default:
      /* scelta non valida */
      break;
  };

  return 0;
}

int menu(void)
{
  int scelta = 0;

  do {
    printf("\nScegli la base:\n"
          "1) Binario\n"
          "2) Ottale\n"
          "3) Esadecimale\n\n"
          "Scelta: ");
    scanf("%d", &scelta);
  } while (scelta<1 || scelta>3);

  return scelta;
}

/* converte numeri decimali
 * compresi tra 0 e 255 in binario.
 * Risultato a 8 bit
 */
void converti_in_binario(int num)
{
  int current_weight = 128;  /* peso ottavo bit */
  int current_bit;
  int i;

  for (i = 0; i < 8; i++) {
    current_bit = num/current_weight;
    printf("%d", current_bit);
    num -= current_bit*current_weight;
    current_weight /= 2;
  }

  printf(" (2)\n");
}

/* converte numeri decimali
 * compresi tra 0 e 255 in ottale.
 * Risultato in 3 cifre.
 */
void converti_in_ottale(int num)
{
  int current_weight = 64;
  int current_bit;
  int i;

  for (i = 0; i < 3; i++) {
    current_bit = num/current_weight;
    printf("%d", current_bit);
    num -= current_bit*current_weight;
    current_weight /= 8;
  }

  printf(" (8)\n");
}

/* converte numeri decimali
 * compresi tra 0 e 255 in esadecimale.
 * Risultato in 2 cifre.
 */
void converti_in_esadecimale(int num)
{
  int current_weight = 16;
  int current_bit;
  int i;

  for (i = 0; i < 2; i++) {
    current_bit = num/current_weight;
    switch(current_bit) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        printf("%d", current_bit);
        break;
      case 10:
        putchar('A');
        break;
      case 11:
        putchar('B');
        break;
      case 12:
        putchar('C');
        break;
      case 13:
        putchar('D');
        break;
      case 14:
        putchar('E');
        break;
      case 15:
        putchar('F');
        break;
      default:
        putchar('-');
        break;
    }
    num -= current_bit*current_weight;
    current_weight /= 16;
  }

  printf(" (16)\n");
}
