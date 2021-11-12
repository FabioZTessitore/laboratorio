/* queue.h */

/* Una queue */

#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

struct queue {
    Node *head;
    Node *tail;
    int size;
};
typedef struct queue Queue;

void queue_init(Queue * const q);
int queue_isEmpty(const Queue * const q);
int queue_size(const Queue * const q);
void queue_print(const Queue * const q);
void queue_enqueue(Queue * const q, int val);
int queue_dequeue(Queue * const q);
void queue_clear(Queue * const q);

#endif