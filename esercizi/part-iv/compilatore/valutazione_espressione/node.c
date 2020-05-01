/* node.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

void node_init(Node * const n, char *value)
{
    int len = strlen(value);

    n->s = (char *) malloc(len+1);
    strcpy(n->s, value);
}

void node_free(Node *n)
{
    free(n->s);
    n->s = NULL;
}

void node_print(const Node * const n)
{
    printf("%s --> ", n->s);
}