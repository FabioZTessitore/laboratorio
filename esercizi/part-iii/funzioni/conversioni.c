/* conversioni.c */

/* Conversioni di base, da decimale a binario, ottale o esadecimale */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make conversioni
 * $ ./conversioni
 */

#include <stdio.h>

/* stampa menu */
void menu();

/* conversioni di base */
void converti_in_binario(int num);
void converti_in_ottale(int num);
void converti_in_esadecimale(int num);


int main()
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

  do {
    menu();   /* scelte valide: 1, 2, 3 */
    scanf("%d", &scelta);
  } while (scelta<1 || scelta>3);

  printf("\n%d (10) = ", num);
  switch(scelta) {
    case 1:
      converti_in_binario(num);
      printf(" (2)\n");
      break;
    case 2:
      converti_in_ottale(num);
      printf(" (8)\n");
      break;
    case 3:
      converti_in_esadecimale(num);
      printf(" (16)\n");
      break;
    default:
      /* scelta non valida */
      break;
  };

  return 0;
}

void menu()
{
  printf("\nScegli la base:\n"
        "1) Binario\n"
        "2) Ottale\n"
        "3) Esadecimale\n\n"
        "Scelta: ");
}

/* converte numeri decimali
 * compresi tra 0 e 255 in binario.
 * Risultato a 8 bit
 */
void converti_in_binario(int num)
{
  int i;
  int current_weight = 128;  /* peso ottavo bit */
  int current_bit;

  for (i = 0; i < 8; i++) {
    current_bit = num/current_weight;
    printf("%d", current_bit);
    num -= current_bit*current_weight;
    current_weight /= 2;
  }
}

/* converte numeri decimali
 * compresi tra 0 e 255 in ottale.
 * Risultato in 3 cifre.
 */
void converti_in_ottale(int num)
{
  int i;
  int current_weight = 64;
  int current_bit;

  for (i = 0; i < 3; i++) {
    current_bit = num/current_weight;
    printf("%d", current_bit);
    num -= current_bit*current_weight;
    current_weight /= 8;
  }
}

/* converte numeri decimali
 * compresi tra 0 e 255 in esadecimale.
 * Risultato in 2 cifre.
 */
void converti_in_esadecimale(int num)
{
  int i;
  int current_weight = 16;
  int current_bit;

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
}
