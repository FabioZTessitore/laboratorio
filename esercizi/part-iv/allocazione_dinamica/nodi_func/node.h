/* node.h */

#ifndef NODE_H
#define NODE_H

struct node {
    int val;
    struct node *next;
};
typedef struct node Node;
typedef struct node *NodePtr;

int nodeseq_isEmpty(Node *head);
void nodeseq_print(Node *head);
void nodeseq_insertHead(NodePtr *head, int val);
void nodeseq_insertTail(NodePtr *head, int val);
void nodeseq_insertAfter(NodePtr head, int val, int key);
void nodeseq_clear(NodePtr *head);

#endif
