/* diff_longitudine.h */

#ifndef DIFF_LONGITUDINE_H
#define DIFF_LONGITUDINE_H

#include "longitudine.h"

struct diff_longitudine {
  int gradi;
  int primi;
  int secondi;
  int segno;
};

typedef struct diff_longitudine DiffLongitudine;

DiffLongitudine diff_longitudine(const Longitudine * const l1, const Longitudine * const l2);
void diff_longitudine_print(const DiffLongitudine * const dl);

#endif
