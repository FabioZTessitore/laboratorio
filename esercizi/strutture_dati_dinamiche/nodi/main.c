/* main.c */

/* Una sequenza di Nodi */

#include <stdio.h>
#include "node.h"

int isEmpty(Node *current);
void printNodes(Node *current);

int main(void)
{
    Node *head = NULL;
    /*
        head ---> NULL
    */

    printf("IsEmpty? %d\n", isEmpty(head));
    printNodes(head);
    putchar('\n');

    /* creazione di un nuovo nodo */
    Node n1;
    n1.val = 1;
    n1.next = NULL;
    /* aggiungiamo n1 alla sequenza */
    head = &n1;
    /*
        head ---> n1 ---> NULL
    */
    printf("IsEmpty? %d\n", isEmpty(head));
    printNodes(head);
    putchar('\n');

    /* creazione di un secondo nodo */
    Node n2;
    n2.val = 2;
    n2.next = NULL;
    /* posiziona n2 in coda */
    n1.next = &n2;
    /*
        head ---> n1 ---> n2 ---> NULL
    */
    printf("IsEmpty? %d\n", isEmpty(head));
    printNodes(head);
    putchar('\n');

    /* un altro nodo ancora */
    Node n3;
    n3.val = 3;
    n3.next = NULL;
    /* inserimento in testa */
    n3.next = head;
    head = &n3;
    /*
        head ---> n3 ---> n1 ---> n2 ---> NULL
    */
    printf("IsEmpty? %d\n", isEmpty(head));
    printNodes(head);
    putchar('\n');

    /* ancora uno */
    Node n4;
    n4.val = 4;
    n4.next = NULL;
    /* inserimento in posizione intermedia */
    n4.next = n1.next;
    n1.next = &n4;
    /*
        head ---> n3 ---> n1 ---> n4 ---> n2 ---> NULL
    */
    printf("IsEmpty? %d\n", isEmpty(head));
    printNodes(head);
    putchar('\n');
    
    return 0;
}

int isEmpty(Node *current)
{
    return current == NULL;
}

void printNodes(Node *current)
{
    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}