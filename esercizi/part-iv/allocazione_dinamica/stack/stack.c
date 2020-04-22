/* stack.c */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "node.h"

void stack_init(Stack * const s)
{
    s->head = NULL;
    s->size = 0;
}

int stack_isEmpty(const Stack * const s)
{
    return s->size == 0;
}

int stack_size(const Stack * const s)
{
    return s->size;
}

void stack_print(const Stack * const s)
{
    Node *current = s->head;

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void stack_push(Stack * const s, int val)
{
    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;
    newNode->next = s->head;
    s->head = newNode;

    s->size++;
}

int stack_pop(Stack * const s)
{
    Node *temp;
    int value;

    value = s->head->val;

    temp = s->head;
    s->head = s->head->next;

    printf("Libero memoria per l'elemento %d\n", temp->val);
    free(temp);

    s->size--;

    return value;
}

int stack_top(Stack * const s)
{
    return s->head->val;
}

void stack_clear(Stack * const s)
{
    Node *current = s->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;

        printf("Libero memoria per l'elemento %d\n", temp->val);
        free(temp);
    }

    s->head = NULL;
    s->size = 0;
}