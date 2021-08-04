/* conversioni2.c */

/* Conversioni di base, da decimale a binario, ottale o esadecimale */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make conversioni2
 * $ ./conversioni2
 */

#include <stdio.h>

/* stampa menu */
int menu(void);

/* conversioni di base */
void converti(int num, int base);

int main(void)
{
  /* scelta effettuata, indica il tipo di conversione da effettuare */
  int scelta = 0;

  /* numero da convertire */
  int num = 0;

  do {
    printf("Inserisci il numero da convertire (0-255): ");
    scanf("%d", &num);
  } while (num<0 || num>255);

  scelta = menu();   /* scelte valide: 1, 2, 3 */

  printf("\n%d (10) = ", num);
  switch(scelta) {
    case 1:
      converti(num, 2);
      break;
    case 2:
      converti(num, 8);
      break;
    case 3:
      converti(num, 16);
      break;
    default:
      /* scelta non valida */
      break;
  };

  return 0;
}

int menu(void)
{
  int scelta;

  do {
    printf("\nScegli la base:\n"
        "1) Converti in binario\n"
        "2) Converti in ottale\n"
        "3) Converti in esadecimale\n"
        "Scegli: ");
    scanf("%d", &scelta);
  } while (scelta<1 || scelta>3);

  return scelta;
}

/* converte numeri decimali compresi tra 0 e 255
 * in binario, in ottale o in esadecimale */
void converti(int num, int base)
{
  int current_weight;
  int current_bit;
  int numero_cifre;
  int errore_base = 0;
  int i;

  switch (base) {
    case 2:
      numero_cifre = 8;
      current_weight = 128;
      break;
    case 8:
      numero_cifre = 3;
      current_weight = 64;
      break;
    case 16:
      numero_cifre = 2;
      current_weight = 16;
      break;
    default:
      printf("base puo' essere solo 2, 8 o 16\n");
      errore_base = 1;
      break;
  }

  if (errore_base) return;

  for (i = 0; i < numero_cifre; i++) {
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
    current_weight /= base;
  }

  printf(" (%d)\n", base);
}
