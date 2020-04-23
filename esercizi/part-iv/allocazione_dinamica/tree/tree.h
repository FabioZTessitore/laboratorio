/* tree.h */

/* Una tree */

#ifndef TREE_H
#define TREE_H

#include "node.h"

struct tree {
    Node *root;
};
typedef struct tree Tree;

void tree_init(Tree * const t);
void tree_print(const Tree * const t);
void tree_insert(Tree * const t, int val);
void tree_clear(Tree * const t);

#endif