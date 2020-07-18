/* simpletron.h */

#ifndef SIMPLETRON_H
#define SIMPLETRON_H

#include "memory.h"
#include "cpu.h"

struct simpletron {
  Cpu cpu;
  Memory memory;
};

typedef struct simpletron Simpletron;

Simpletron simpletron_make(void);

void simpletron_welcome(void);

void simpletron_enterProgram(Simpletron * const pSimpletron);

void simpletron_execProgram(Simpletron * const pSimpletron);

#endif
