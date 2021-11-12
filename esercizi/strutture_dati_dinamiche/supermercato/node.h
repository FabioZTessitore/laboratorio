/* node.h */

#ifndef NODE_H
#define NODE_H

struct node {
    int val;
    struct node *next;
};
typedef struct node Node;
typedef struct node *NodePtr;

#endif
