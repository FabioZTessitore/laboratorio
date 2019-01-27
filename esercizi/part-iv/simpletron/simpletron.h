/* simpletron.h */

#ifndef SIMPLETRON_H
#define SIMPLETRON_H

#include "memory.h"
#include "cpu.h"

void simpletron_welcome();

void simpletron_enterProgram(Memory * const pMemory);

void simpletron_execProgram(Memory * const pMemory, Cpu * const pCpu);

#endif
