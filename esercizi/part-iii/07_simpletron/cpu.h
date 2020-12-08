/* cpu.h */

#ifndef CPU_H
#define CPU_H

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

void cpu_dump(const int accumulator, const int instructionRegister,
  const int instructionCounter, const int opcode, const int operand);

void cpu_fetch(const int memory[], const int memory_size,
  int * const p_instructionRegister, int * const p_instructionCounter);

void cpu_decode(int * const p_instructionRegister, int * const p_instructionCounter,
  int * const p_opcode, int * const p_operand);

int cpu_execute(int memory[], const int memory_size,
  int * const p_accumulator,
  int * const p_instructionCounter, const int opcode, const int operand);

void cpu_run(int memory[], const int memory_size,
  int * const p_accumulator,
  int * const p_instructionRegister, int * const p_instructionCounter,
  int * const p_opcode, int * const p_operand);

#endif
