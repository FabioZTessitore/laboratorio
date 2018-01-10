/* main.c */

/* CAI, esercitazioni con la moltiplicazione */

#include <stdio.h>
#include "cai.h"

int main()
{
  int cifra1, cifra2;
  int result;
  int answer;

  cai_init();

  while (1) {
    cifra1 = cai_estrai_cifra();
    cifra2 = cai_estrai_cifra();

    result = cifra1*cifra2;

    do {
      printf("Quanto fa %d per %d? (CTRL+C per uscire) ", cifra1, cifra2);
      scanf("%d", &answer);

      if (answer != result) {
        cai_risposta_errata();
      }
    } while(answer != result);

    cai_risposta_esatta();
  }

  return 0;
}
