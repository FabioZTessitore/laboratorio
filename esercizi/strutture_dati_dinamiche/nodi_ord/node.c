/* node.c */

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int nodeseq_isEmpty(const Node * const head)
{
    return head == NULL;
}

void nodeseq_print(const Node * const head)
{
    const Node *current = head;

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void nodeseq_insert(NodePtr *head, int val)
{
    Node *current = *head;
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

    /* lista vuota o inserimento in testa */
    if (prev == NULL) {
        newNode->next = current;
        *head = newNode;
        return;
    }

    /* inserisce dopo prev */
    newNode->next = prev->next;
    prev->next = newNode;
}

void nodeseq_remove(NodePtr *head, int val)
{
    Node *current = *head;
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

    /* elimina elemento in testa */
    if (prev == NULL) {
        printf("Elimina elemento in testa\n");
        temp = *head;
        *head = current->next;

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

void nodeseq_clear(NodePtr *head)
{
    Node *current = *head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;

        printf("Libero memoria per l'elemento %d\n", temp->val);
        free(temp);
    }

    *head = NULL;
}