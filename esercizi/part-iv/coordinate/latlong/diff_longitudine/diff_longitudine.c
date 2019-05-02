/* diff_longitudine.c */

#include <stdio.h>
#include <stdlib.h>
#include "diff_longitudine.h"
#include "longitudine.h"

DiffLongitudine diff_longitudine(const Longitudine * const l1, const Longitudine * const l2)
{
  DiffLongitudine dl;

  int sec1 = l1->segno * (l1->gradi * 3600 + l1->primi * 60 + l1->secondi);
  int sec2 = l2->segno * (l2->gradi * 3600 + l2->primi * 60 + l2->secondi);

  int diff = sec2 - sec1;
  dl.segno = diff > 0 ? 1 : -1;
  /* se la differenza supera 180 gradi, fai il giro dall'altro lato! */
  if (abs(diff) > 180 * 3600) {
    diff = - (360*3600 - abs(diff));
    dl.segno = diff > 0 ? -1 : 1;
  }

  if (diff < 0) {
    diff = -diff;
  }

  dl.gradi = diff / 3600;
  diff %= 3600;
  dl.primi = diff / 60;
  diff %= 60;
  dl.secondi = diff;

  return dl;
}

void diff_longitudine_print(const DiffLongitudine * const dl)
{
  printf("%03d %02d %02d ", dl->gradi, dl->primi, dl->secondi);
  printf(dl->segno > 0 ? "E" : "W");
  putchar('\n');
}
