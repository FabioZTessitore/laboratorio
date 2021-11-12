/* list.h */

/* Una lista concatenata */

#ifndef LIST_H
#define LIST_H

#include "node.h"

struct list {
    Node *head;
    int size;
};
typedef struct list List;

void list_init(List * const l);
int list_isEmpty(const List * const l);
int list_size(const List * const l);
void list_print(const List * const l);
void list_insert(List * const l, int val);
void list_remove(List * const l, int val);
void list_clear(List * const l);

#endif