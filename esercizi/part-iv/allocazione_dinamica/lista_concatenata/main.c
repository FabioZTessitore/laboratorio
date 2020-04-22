/* main.c */

/* Esempio d'uso di una lista concatenata */

#include <stdio.h>
#include "list.h"

int main(void)
{
    List l;
    list_init(&l);

    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* aggiunta di un nuovo nodo */
    list_insert(&l, 1);
    /*
        head ---> 1 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* aggiunta di un nodo in coda */
    list_insert(&l, 3);
    /*
        head ---> 1 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* aggiunta di un nodo intermedio */
    list_insert(&l, 2);
    /*
        head ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* aggiunta di un nodo in testa */
    list_insert(&l, 0);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* un altro nodo ancora */
    list_insert(&l, 4);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* rimozione di un nodo non esistente */
    list_remove(&l, 42);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* rimozione di un nodo in coda */
    list_remove(&l, 4);
    /*
        head ---> 0 ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* rimozione di un nodo in testa */
    list_remove(&l, 0);
    /*
        head ---> 1 ---> 2 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    /* rimozione di un nodo intermedio */
    list_remove(&l, 2);
    /*
        head ---> 1 ---> 3 ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');

    list_clear(&l);
    putchar('\n');
    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", list_isEmpty(&l));
    printf("Size: %d\n", list_size(&l));
    list_print(&l);
    putchar('\n');
    
    return 0;
}
