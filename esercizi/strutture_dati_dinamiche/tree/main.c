/* main.c */

/* Esempio d'uso di un albero binario */

#include <stdio.h>
#include "tree.h"

int main(void)
{
    Tree t;
    
    tree_init(&t);

    tree_print(&t);
    putchar('\n');

    /* aggiunta di un elemento */
    tree_insert(&t, 5);
    /*
                5
           NULL    NULL
    */
    tree_print(&t);
    putchar('\n');

    /* aggiunta di un altro elemento */
    tree_insert(&t, 3);
    /*
                5
           3        NULL
       NULL  NULL
    */
    tree_print(&t);
    putchar('\n');

    /* aggiunta di un altro elemento */
    tree_insert(&t, 1);
    /*
                5
           3        NULL
        1    NULL
    */
    tree_print(&t);
    putchar('\n');

    /* aggiunta di un altro elemento */
    tree_insert(&t, 4);
    /*
                5
           3        NULL
         1   4
    */
    tree_print(&t);
    putchar('\n');

    /* aggiunta di un altro elemento */
    tree_insert(&t, 8);
    /*
                 5
           3           8
         1   4     NULL  NULL
    */
    tree_print(&t);
    putchar('\n');

    /* aggiunta di un altro elemento */
    tree_insert(&t, 9);
    /*
                 5
           3           8
         1   4     NULL  9
    */
    tree_print(&t);
    putchar('\n');

    tree_clear(&t);
    putchar('\n');

    tree_print(&t);
    putchar('\n');
    
    return 0;
}
