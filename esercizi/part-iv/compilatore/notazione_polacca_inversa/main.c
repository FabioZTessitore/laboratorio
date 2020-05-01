/* main.c */

/* Conversione di una espressione scritta in notazione infissa in notazione polacca inversa */

/* Es.
 *
 * 8 + 3 ---> 8 3 +
 *
 * (8 + 3) * 5 ---> 8 3 + 5 *
 * (24 + 4) * 8 ---> 24 4 + 8 *
 */

/* Operazione preliminare:
 *
 * Siccome i numeri possono essere composti da piu' cifre, la prima operazione
 * e' la creazione di una coda contenente i vari token (parentesi, operatori, numeri)
 *
 * Dati:
 * - infix      il vettore contenente l'espressione da convertire
 * - token      coda contenente la lista dei token
 *
 * 1) Per ogni carattere di infix
 * 2)     se e' spazio ignora
 * 3)     se e' una parentesi o un operatore inserisce in coda
 * 4)     se e' una cifra, determina la fine delle cifre e inserisce in coda
 *
 * Es.
 *
 * 8 + 3 ---> 8 --> + --> 3 --> NULL
 * (8 + 3) * 5 ---> ( --> 8 --> + --> 3 --> ) --> * --> 5 --> NULL
 * (24 + 4) * 8 ---> ( --> 24 --> + --> 4 --> ) --> * --> 8 --> NULL
 */
 
/*
 * Algoritmo di conversione:
 *
 * Dati:
 * - token      la coda contenente i token
 * - postfix    la coda contenente l'espressione convertita
 * - stack      uno stack per la memorizzazione temporanea dei caratteri
 *
 *  1) inserire una parentesi aperta nello stack e una chiusa al termine di token
 *  2) finche' lo stack non e' vuoto:
 *  3)     estrae il primo token
 *  4)     se e' un numero lo copia in postfix
 *  5)     se e' una parentesi aperta la inserisce nello stack
 *  6)     se e' una parentesi chiusa:
 *  7)         estrae gli operatori dallo stack fino a che non trova una parentesi aperta e li inserisce in postfix
 *  8)         elimina la parentesi aperta dallo stack
 *  9)     se e' un operatore:
 * 10)         estrae gli operatori di priorita' maggiore o uguale a quello corrente dallo stack e li inserisce in postfix
 * 11)         inserisce nello stack l'operatore corrente
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "queue.h"
#include "stack.h"

void make_postfix(Queue *postfix, char *infix);
int priority(char *op, char *t);

int main(void)
{
    char infix[] = "(2 * (8 + 3)) + 5 * 43 + 1";
    Queue postfix;

    make_postfix(&postfix, infix);
    
    queue_print(&postfix);

    queue_clear(&postfix);

    return 0;
}

void make_postfix(Queue *postfix, char *infix)
{
    Queue token;
    Stack s;
    char *current;
    char buffer[80];
    int k;
    char *stack_item;

    queue_init(&token);
    queue_init(postfix);
    stack_init(&s);

    /* Operazione preliminare: creazione della coda di token */
    current = infix;
    while (*current) {
        if (isspace(*current)) {
            /* ignora spazi */
        } else if (!isdigit(*current)) {
            /* parentesi ed operatori */
            buffer[0] = *current;
            buffer[1] = '\0';
            queue_enqueue(&token, buffer);
        } else {
            /* numeri */
            k = 0;
            buffer[k] = *current;
            current++;
            while (isdigit(*current)) {
                buffer[++k] = *current;
                current++;
            }
            buffer[++k] = '\0';
            queue_enqueue(&token, buffer);
            continue;
        }
        current++;
    }

    printf("Token:\n");
    queue_print(&token);
    putchar('\n');

    /* Algoritmo */

    /* 1) inserire una parentesi aperta nello stack e una chiusa al termine di token */
    stack_push(&s, "(");
    queue_enqueue(&token, ")");

    /* 2) finche' lo stack non e' vuoto: */
    while (!stack_isEmpty(&s)) {
        /* 3) estrae il primo token */
        current = queue_dequeue(&token);

        /* 4) se e' un numero lo copia in postfix */
        if (isdigit(*current)) {
            queue_enqueue(postfix, current);
        }
        
        /* 5) se e' una parentesi aperta la inserisce nello stack */
        else if (*current == '(') {
            stack_push(&s, current);
        }
        
        /* 6) se e' una parentesi chiusa: */
        else if (*current == ')') {
            /* 7) estrae gli operatori dallo stack fino a che non trova una
                  parentesi aperta e li inserisce in postfix */
            while (strcmp(stack_top(&s), "(") != 0) {
                stack_item = stack_pop(&s);
                queue_enqueue(postfix, stack_item);
                free(stack_item);
            }
            /* 8) elimina la parentesi aperta dallo stack */
            stack_item = stack_pop(&s);
            free(stack_item);
        }

        /* 9) se e' un operatore: */
        else {
            /* 10) estrae gli operatori di priorita' maggiore o uguale
                   a quello corrente dallo stack e li inserisce in postfix */
            while (priority(stack_top(&s), current)) {
                stack_item = stack_pop(&s);
                queue_enqueue(postfix, stack_item);
                free(stack_item);
            }
            /* 11) inserisce nello stack l'operatore corrente */
            stack_push(&s, current);
        }

        free(current);
    }

    queue_clear(&token);
    stack_clear(&s);
}

int priority(char *op, char *t)
{
    if (strcmp(op, "*") != 0 &&
        strcmp(op, "/") != 0 &&
        strcmp(op, "+") != 0 &&
        strcmp(op, "-") != 0) {
            return 0;
    }
    
    if (strcmp(op, "*") == 0 ||
        strcmp(op, "/") == 0) {
            return 1;
    }
    
    if (strcmp(op, "+") == 0 ||
        strcmp(op, "-") == 0) {
            if (strcmp(t, "*") == 0 ||
                strcmp(t, "/") == 0) {
                    return 0;
            } else {
                return 1;
            }
    }

    return 0;
}