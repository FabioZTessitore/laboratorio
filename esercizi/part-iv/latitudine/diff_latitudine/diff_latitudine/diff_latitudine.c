#include <stdio.h>
#include "diff_latitudine.h"
#include "latitudine.h"

DiffLatitudine diff_latitudine(const Latitudine * const l1, const Latitudine * const l2)
{
  DiffLatitudine dl;

  int sec1 = l1->segno * (l1->gradi * 3600 + l1->primi * 60 + l1->secondi);
  int sec2 = l2->segno * (l2->gradi * 3600 + l2->primi * 60 + l2->secondi);

  int diff = sec2 - sec1;
  if (diff < 0) {
    dl.segno = -1;
    diff = -diff;
  }
  else dl.segno = 1;

  dl.gradi = diff / 3600;
  diff %= 3600;
  dl.primi = diff / 60;
  diff %= 60;
  dl.secondi = diff;

  return dl;
}

void diff_latitudine_print(const DiffLatitudine * const dl)
{
  printf("%03d %02d %02d", dl->gradi, dl->primi, dl->secondi);
  printf(dl->segno > 0 ? "N" : "S");
  putchar('\n');
}
