/* node.h */

#ifndef NODE_H
#define NODE_H

struct node {
    int val;
    struct node *next;
};
typedef struct node Node;
typedef struct node *NodePtr;


void nodeseq_insert(NodePtr *head, int val);
void nodeseq_remove(NodePtr *head, int val);
void nodeseq_clear(NodePtr *head);

#endif
