/* cai.c */

#include <stdio.h>
#include "cai.h"
#include "random.h"

#define N_ANSWERS 4

int cai_estrai_risposta();

void cai_init()
{
  random_init();
}

int cai_estrai_cifra()
{
  return random_between(0, 10);
}

int cai_estrai_risposta()
{
  return random_between(0, N_ANSWERS);
}

void cai_risposta_esatta()
{
  switch(cai_estrai_risposta()) {
    case 0:
      printf("Very good!\n");
      break;
    case 1:
      printf("Excellent!\n");
      break;
    case 2:
      printf("Nice work!\n");
      break;
    case 3:
      printf("Keep up the good work!\n");
      break;
    default:
      printf("Qualcosa e' andato storto!\n");
      break;
  }
}

void cai_risposta_errata()
{
  switch(cai_estrai_risposta()) {
    case 0:
      printf("No, Please try again.\n");
      break;
    case 1:
      printf("Wrong. Try once more.\n");
      break;
    case 2:
      printf("Don't give up!\n");
      break;
    case 3:
      printf("No. Keep trying.\n");
      break;
    default:
      printf("Qualcosa e' andato storto!\n");
      break;
  }
}
