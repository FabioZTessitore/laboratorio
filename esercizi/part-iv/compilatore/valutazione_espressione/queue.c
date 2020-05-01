/* queue.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        node_print(current);
        current = current->next;
    }
    printf("NULL\n");
}

void queue_enqueue(Queue * const q, char *value)
{
    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    node_init(newNode, value);
    newNode->next = NULL;

    q->size++;

    if (q->head == NULL) {
        q->head = newNode;
    } else {
        q->tail->next = newNode;
    }

    q->tail = newNode;
}

char *queue_dequeue(Queue * const q)
{
    Node *temp;
    char *value;

    value = (char *) malloc(strlen(q->head->s)+1);
    strcpy(value, q->head->s);

    temp = q->head;
    q->head = q->head->next;

    if (q->head == NULL) {
        q->tail = NULL;
    }

    node_free(temp);
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

        node_free(temp);
        free(temp);
    }

    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
}