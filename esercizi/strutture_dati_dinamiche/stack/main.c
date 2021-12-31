/* main.c */

/* Esempio d'uso di uno stack */

#include <stdio.h>
#include "stack.h"

int main(void)
{
    Stack s;
    int value;
    
    stack_init(&s);

    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* aggiunta di un elemento */
    stack_push(&s, 4);
    /*
        head ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* aggiunta di un altro elemento */
    stack_push(&s, 3);
    /*
        head ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* aggiunta di un altro elemento */
    stack_push(&s, 2);
    /*
        head ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* aggiunta di un altro elemento */
    stack_push(&s, 1);
    /*
        head ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* lettura del primo elemento */
    if (!stack_isEmpty(&s)) {
        value = stack_top(&s);
        printf("Top element: %d\n", value);
    }
    /*
        head ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    /* rimozione del primo elemento */
    if (!stack_isEmpty(&s)) {
        value = stack_pop(&s);
        printf("Top element: %d\n", value);
    }
    /*
        head ---> 2 ---> 3 ---> 4 ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');

    stack_clear(&s);
    putchar('\n');
    /*
        head ---> NULL
    */
    printf("IsEmpty? %d\n", stack_isEmpty(&s));
    printf("Size: %d\n", stack_size(&s));
    stack_print(&s);
    putchar('\n');
    
    return 0;
}
