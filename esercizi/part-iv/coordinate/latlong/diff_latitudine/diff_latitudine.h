/* diff_latitudine.h */

#ifndef DIFF_LATITUDINE_H
#define DIFF_LATITUDINE_H

#include "latitudine.h"

struct diff_latitudine {
  int gradi;
  int primi;
  int secondi;
  int segno;
};

typedef struct diff_latitudine DiffLatitudine;

DiffLatitudine diff_latitudine(const Latitudine * const l1, const Latitudine * const l2);
void diff_latitudine_print(const DiffLatitudine * const dl);

#endif
