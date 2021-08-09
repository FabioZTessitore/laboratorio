/* memory.h */

#ifndef MEMORY_H
#define MEMORY_H

int memory_get(const int memory[], const int memory_size, const int index);
void memory_set(int memory[], const int memory_size, const int index, const int value);
void memory_dump(const int memory[], const int memory_size);

#endif
