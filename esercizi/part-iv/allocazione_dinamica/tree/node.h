/* node.h */

#ifndef NODE_H
#define NODE_H

struct node {
    int val;
    struct node *left;
    struct node *right;
};
typedef struct node Node;
typedef struct node *NodePtr;

#endif
