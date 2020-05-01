/* queue.c */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "node.h"

void queue_init(Queue * const q)
{
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
}

int queue_isEmpty(const Queue * const q)
{
    return q->size == 0;
}

int queue_size(const Queue * const q)
{
    return q->size;
}

void queue_print(const Queue * const q)
{
    Node *current = q->head;

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void queue_enqueue(Queue * const q, int val)
{
    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;
    newNode->next = NULL;

    q->size++;

    if (q->head == NULL) {
        q->head = newNode;
    } else {
        q->tail->next = newNode;
    }

    q->tail = newNode;
}

int queue_dequeue(Queue * const q)
{
    Node *temp;
    int value;

    value = q->head->val;

    temp = q->head;
    q->head = q->head->next;

    if (q->head == NULL) {
        q->tail = NULL;
    }

    free(temp);

    q->size--;

    return value;
}

void queue_clear(Queue * const q)
{
    Node *current = q->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;

        free(temp);
    }

    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
}