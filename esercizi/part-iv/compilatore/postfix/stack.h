/* stack.h */

/* Uno stack */

#ifndef STACK_H
#define STACK_H

#include "node.h"

struct stack {
    Node *head;
    int size;
};
typedef struct stack Stack;

void stack_init(Stack * const s);
int stack_isEmpty(const Stack * const s);
int stack_size(const Stack * const s);
void stack_print(const Stack * const s);
void stack_push(Stack * const s, char *value);
char *stack_pop(Stack * const s);
char *stack_top(Stack * const s);
void stack_clear(Stack * const s);

#endif