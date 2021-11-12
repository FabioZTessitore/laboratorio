/* list.c */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "node.h"

void list_init(List *l)
{
    l->head = NULL;
    l->size = 0;
}

int list_isEmpty(const List * const l)
{
    return l->size == 0;
}

int list_size(const List * const l)
{
    return l->size;
}

void list_print(const List * const l)
{
    const Node *current = l->head;

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void list_insert(List * const l, int val)
{
    Node *current = l->head;
    Node *prev = NULL;

    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;

    /* cerca ultimo elemento minore di val */
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    l->size++;

    /* lista vuota o inserimento in testa */
    if (prev == NULL) {
        newNode->next = current;
        l->head = newNode;
        return;
    }

    /* inserisce dopo prev */
    newNode->next = prev->next;
    prev->next = newNode;
}

void list_remove(List * const l, int val)
{
    Node *current = l->head;
    Node *prev = NULL;

    Node *temp;

    /* cerca elemento val */
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    /* elemento non trovato */
    if (current == NULL) {
        printf("Elemento %d non trovato\n", val);
        return;
    }

    l->size--;

    /* elimina elemento in testa */
    if (prev == NULL) {
        printf("Elimina elemento in testa\n");
        temp = l->head;
        l->head = current->next;

        printf("Libero memoria per l'elemento %d\n", temp->val);
        free(temp);

        return;
    }

    printf("Elimina elemento intermedio o in coda\n");
    temp = current;
    prev->next = current->next;

    printf("Libero memoria per l'elemento %d\n", temp->val);
    free(temp);
}

void list_clear(List * const l)
{
    Node *current = l->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;

        printf("Libero memoria per l'elemento %d\n", temp->val);
        free(temp);
    }

    l->head = NULL;
    l->size = 0;
}