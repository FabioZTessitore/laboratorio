/* node.h */

#ifndef NODE_H
#define NODE_H

struct node {
    char *s;
    struct node *next;
};
typedef struct node Node;
typedef struct node *NodePtr;

void node_init(Node * const n, char *value);
void node_free(Node *n);
void node_print(const Node * const n);

#endif
