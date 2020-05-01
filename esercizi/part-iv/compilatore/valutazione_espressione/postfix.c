/* postfix.c */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "postfix.h"
#include "queue.h"
#include "stack.h"

int priority(char *op, char *t);

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