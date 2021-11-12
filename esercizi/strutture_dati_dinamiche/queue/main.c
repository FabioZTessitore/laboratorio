/* main.c */

/* Esempio d'uso di una queue */

#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue q;
    int value;
    
    queue_init(&q);

    /*
        head ---> NULL
                   ^
                   |
                  tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* aggiunta di un elemento */
    queue_enqueue(&q, 1);
    /*
        head ---> 1 ---> NULL
                  ^
                  |
                 tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* aggiunta di un altro elemento */
    queue_enqueue(&q, 2);
    /*
        head ---> 1 ---> 2 ---> NULL
                         ^
                         |
                        tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* aggiunta di un altro elemento */
    queue_enqueue(&q, 3);
    /*
        head ---> 1 ---> 2 ---> 3 ---> NULL
                                ^
                                |
                               tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* aggiunta di un altro elemento */
    queue_enqueue(&q, 4);
    /*
        head ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
                                       ^
                                       |
                                      tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* rimozione del primo elemento */
    if (!queue_isEmpty(&q)) {
        value = queue_dequeue(&q);
        printf("Element: %d\n", value);
    }
    /*
        head ---> 2 ---> 3 ---> 4 ---> NULL
                                ^
                                |
                               tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    /* rimozione del primo elemento */
    if (!queue_isEmpty(&q)) {
        value = queue_dequeue(&q);
        printf("Element: %d\n", value);
    }
    /*
        head ---> 3 ---> 4 ---> NULL
                         ^
                         |
                        tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');

    queue_clear(&q);
    putchar('\n');
    /*
        head ---> NULL
                   ^
                   |
                  tail
    */
    printf("IsEmpty? %d\n", queue_isEmpty(&q));
    printf("Size: %d\n", queue_size(&q));
    queue_print(&q);
    putchar('\n');
    
    return 0;
}
