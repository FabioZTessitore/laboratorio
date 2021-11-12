/* main.c */

/* Una sequenza di Nodi */

#include <stdio.h>
#include "node.h"

int main(void)
{
    Node *head = NULL;
    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* creazione di un nuovo nodo */
    nodeseq_insert(&head, 1);
    /*
        head ---> 1 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo in coda */
    nodeseq_insert(&head, 3);
    /*
        head ---> 1 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo intermedio */
    nodeseq_insert(&head, 2);
    /*
        head ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo in testa */
    nodeseq_insert(&head, 0);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* un altro nodo ancora */
    nodeseq_insert(&head, 4);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* rimozione di un nodo non esistente */
    nodeseq_remove(&head, 42);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* rimozione di un nodo in coda */
    nodeseq_remove(&head, 4);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* rimozione di un nodo in testa */
    nodeseq_remove(&head, 0);
    /*
        head ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* rimozione di un nodo intermedio */
    nodeseq_remove(&head, 2);
    /*
        head ---> 1 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    nodeseq_clear(&head);
    putchar('\n');
    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');
    
    return 0;
}
