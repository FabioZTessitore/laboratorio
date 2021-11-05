/* simpletron.h */

#ifndef SIMPLETRON_H
#define SIMPLETRON_H

#include "memory.h"
#include "cpu.h"

struct simpletron {
    Memory memory;
    Cpu cpu;
};
typedef struct simpletron Simpletron;

Simpletron simpletron_make(void);
void simpletron_welcome(void);
void simpletron_enter_program(Simpletron * const pSimpletron);
void simpletron_execute_program(Simpletron * const pSimpletron);
void simpletron_dump(const Simpletron * const pSimpletron);

#endif
