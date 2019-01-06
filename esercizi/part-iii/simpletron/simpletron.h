/* simpletron.h */

#ifndef SIMPLETRON_H
#define SIMPLETRON_H

void simpletron_welcome();

void simpletron_enterProgram(int memory[], const int memory_size);

void simpletron_execProgram(int memory[], const int memory_size,
  int * const p_accumulator,
  int * const p_instructionRegister, int * const p_instructionCounter,
  int * const p_opcode, int * const p_operand);

#endif
