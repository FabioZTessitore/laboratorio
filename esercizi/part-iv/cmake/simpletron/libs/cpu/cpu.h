/* cpu.h */

#ifndef CPU_H
#define CPU_H

#include "memory.h"

/* operation codes */

/* I/O */
#define READ 10
#define WRITE 11

/* Load */
#define LOAD 20
#define STORE 21

/* Math */
#define ADD 30
#define SUB 31
#define DIV 32
#define MUL 33

/* Branch */
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

struct cpu {
  int accumulator;
  int instructionRegister;
  int instructionCounter;
  int opcode;
  int operand;
};

typedef struct cpu Cpu;

Cpu cpu_make(void);

void cpu_dump(const Cpu * const pCpu);

void cpu_fetch(const Memory * const pMemory, Cpu * const pCpu);

int cpu_execute(Memory * const pMemory, Cpu * const pCpu);

void cpu_run(Memory * const pMemory, Cpu * const pCpu);

#endif
