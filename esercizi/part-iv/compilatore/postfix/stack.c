/* stack.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        node_print(current);
        current = current->next;
    }
    printf("NULL\n");
}

void stack_push(Stack * const s, char *value)
{
    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    node_init(newNode, value);
    newNode->next = s->head;
    s->head = newNode;

    s->size++;
}

char *stack_pop(Stack * const s)
{
    Node *temp;
    char *value;

    value = (char *) malloc(strlen(s->head->s)+1);
    strcpy(value, s->head->s);

    temp = s->head;
    s->head = s->head->next;

    printf("Libero memoria per l'elemento %s\n", temp->s);
    node_free(temp);
    free(temp);

    s->size--;

    return value;
}

char *stack_top(Stack * const s)
{
    return s->head->s;
}

void stack_clear(Stack * const s)
{
    Node *current = s->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;

        printf("Libero memoria per l'elemento %s\n", temp->s);
        node_free(temp);
        free(temp);
    }

    s->head = NULL;
    s->size = 0;
}