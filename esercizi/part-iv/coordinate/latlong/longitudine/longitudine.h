/* longitudine.h */

#ifndef LONGITUDINE_H
#define LONGITUDINE_H

struct longitudine {
  int gradi;
  int primi;
  int secondi;
  int segno;
};

typedef struct longitudine Longitudine;

Longitudine longitudine_make(int gradi, int primi, int secondi, int segno);
int longitudine_parse(Longitudine * const l, const char *input);
void longitudine_print(const Longitudine * const l);

#endif
