/* memory.h */

#ifndef MEMORY_H
#define MEMORY_H

#define MEMORY_SIZE 100

struct memory {
  int memory_cells[MEMORY_SIZE];
};

typedef struct memory Memory;

Memory memory_make(void);

int memory_get(const Memory * const pMemory, const int index);

void memory_set(Memory * const pMemory, const int index, const int value);

void memory_dump(const Memory * const pMemory);

#endif
