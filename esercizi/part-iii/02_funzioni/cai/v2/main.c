/* main.c */

/* CAI, esercitazioni con la moltiplicazione */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./main
 */

#include <stdio.h>
#include "cai.h"

int main(void)
{
  int cifra1, cifra2;
  int result;
  int answer;
  int contatore_risposte = 0;
  int risposte_errate = 0;
  int num_domande = 10;

  cai_init();

  while (contatore_risposte < num_domande) {
    cifra1 = cai_estrai_cifra();
    cifra2 = cai_estrai_cifra();

    result = cifra1*cifra2;

    do {
      printf("Domanda # %d (%d)\n", contatore_risposte+1, num_domande);
      printf("Quanto fa %d per %d? ", cifra1, cifra2);
      scanf("%d", &answer);

      contatore_risposte++;

      if (answer != result) {
        risposte_errate++;
        cai_risposta_errata();
      }
    } while(answer != result && contatore_risposte < num_domande);

    if (answer == result) {
      cai_risposta_esatta();
    }
  }

  if ((float)risposte_errate / (float)num_domande > 0.25) {
    printf("Please ask your instructor for extra help\n");
  }

  return 0;
}
