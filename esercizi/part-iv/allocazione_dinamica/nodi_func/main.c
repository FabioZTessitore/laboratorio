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
    nodeseq_insertHead(&head, 1);
    /*
        head ---> 1 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo in testa */
    nodeseq_insertHead(&head, 2);
    /*
        head ---> 2 ---> 1 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo in coda */
    nodeseq_insertTail(&head, 3);
    /*
        head ---> 2 ---> 1 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", nodeseq_isEmpty(head));
    nodeseq_print(head);
    putchar('\n');

    /* aggiunta di un nodo dopo 1 */
    nodeseq_insertAfter(head, 4, 1);
    /*
        head ---> 2 ---> 1 ---> 4 ---> 3 ---> NULL
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
