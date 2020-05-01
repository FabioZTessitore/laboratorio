/* main.c */

/* Valutazione di una espressione scritta in notazione polacca inversa */

/* Es.
 *
 * 8 3 + ---> 11
 *
 * 8 3 + 5 * ---> 55
 * 24 4 + 8 * ---> 224
 * 2 8 3 + * 5 43 * + 1 + ---> 238
 */

/*
 * Algoritmo di valutazione:
 *
 * Dati:
 * - postfix    la coda contenente l'espressione in notazione polacca inversa
 * - stack      uno stack per la memorizzazione temporanea dei dati
 *
 *  1) finche' postfix non e' vuoto:
 *  2)     estrae il primo token
 *  3)     se e' un numero lo inserisce nello stack
 *  4)     se e' un operatore
 *  5)         estrae due numeri, x e y, dallo stack e calcola y op x, poi inserisce il risultato nello stack
 *  6) alla fine estrae il risultato dallo stack
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "postfix.h"
#include "queue.h"
#include "stack.h"

int evaluate(Queue *postfix);

int main(void)
{
    char infix[] = "(2 * (8 + 3)) + 5 * 43 + 1";
    Queue postfix;
    int result;

    make_postfix(&postfix, infix);
    queue_print(&postfix);

    result = evaluate(&postfix);
    queue_clear(&postfix);
    
    printf("Risultato: %d\n", result);

    return 0;
}

int evaluate(Queue *postfix)
{
    /* qui sarebbe opportuno uno stack di interi, invece di uno stack di stringhe */
    Stack s;
    char *token;
    char *x, *y;
    int r;
    char buffer[80];

    stack_init(&s);

    /* 1) finche' postfix non e' vuoto */
    while (!queue_isEmpty(postfix)) {
        /* 2) estrae il primo token */
        token = queue_dequeue(postfix);

        /* 3) se e' un numero lo inserisce nello stack */
        if (isdigit(*token)) {
            stack_push(&s, token);
            free(token);
        } 
        
        /* 4) se e' un operatore */
        else {
            /* 5) estrae due numeri, x e y, dallo stack e calcola y op x,
                  poi inserisce il risultato nello stack */
            x = stack_pop(&s);
            y = stack_pop(&s);
            switch (*token) {
                case '+':
                    r = atoi(y) + atoi(x);
                    break;
                case '-':
                    r = atoi(y) - atoi(x);
                    break;
                case '*':
                    r = atoi(y) * atoi(x);
                    break;
                case '/':
                    r = atoi(y) / atoi(x);
                    break;
                default:
                    fprintf(stderr, "Operatore non riconosciuto\n");
                    fprintf(stderr, "Token: \"%s\"\n", token);
                    exit(-1);
            }
            sprintf(buffer, "%d", r);
            stack_push(&s, buffer);
        }
    }

    /* 6) alla fine estrae il risultato dallo stack */
    x = stack_pop(&s);
    r = atoi(x);
    return r;
}