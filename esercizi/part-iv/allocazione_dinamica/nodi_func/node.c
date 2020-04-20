/* node.c */

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int nodeseq_isEmpty(Node *head)
{
    return head == NULL;
}

void nodeseq_print(Node *head)
{
    Node *current = head;

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void nodeseq_insertHead(NodePtr *head, int val)
{
    /*
        Inizialmente:

        head ---> n1 ... ---> NULL
    */

    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;

    /*
        Dopo:

        head ---> newNode ---> n1 ... ---> NULL
    */
    newNode->next = *head;
    *head = newNode;
}

void nodeseq_insertTail(NodePtr *head, int val)
{
    Node *current = *head;

    /*
        Inizialmente:

        head ---> ... ---> last ---> NULL
    */

    Node *newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;

    /*
        Inizialmente:

        head ---> ... ---> last ---> NULL
    */

    /* sequenza vuota? */
    if (current == NULL) {
        printf("Lista vuota, inserisco in testa\n");
        newNode->next = NULL;
        *head = newNode;
        return;
    }
    
    /* cerca l'ultimo elemento */
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->next = NULL;
}

void nodeseq_insertAfter(NodePtr head, int val, int key)
{
    Node *current = head;
    Node *newNode;

    /* cerca elemento con valore pari a key */
    while (current != NULL && current->val != key) {
        current = current->next;
    }

    /* elemento key non trovato, non fare nulla */
    if (current == NULL) return;

    /* current->val == key */
    newNode = (Node *) malloc( sizeof(Node) );
    if (!newNode) {
        fprintf(stderr, "Impossibile allocare memoria\n");
        return;
    }
    newNode->val = val;
    newNode->next = current->next;
    current->next = newNode;
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