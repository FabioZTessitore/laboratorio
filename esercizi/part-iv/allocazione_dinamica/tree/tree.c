/* tree.c */

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "node.h"

void tree_print_helper(const Node * const root);
void tree_insert_helper(Node **root, int val);
void tree_clear_helper(Node **root);

void tree_init(Tree * const t)
{
    t->root = NULL;
}

void tree_print(const Tree * const t)
{
    if (t->root == NULL) {
        printf("Albero vuoto\n");
        return;
    }

    tree_print_helper(t->root);
}

void tree_print_helper(const Node * const root)
{
    if (root == NULL) return;

    tree_print_helper(root->left);
    printf("%d ", root->val);
    tree_print_helper(root->right);
}

void tree_insert(Tree * const t, int val)
{
    tree_insert_helper(&(t->root), val);
}

void tree_insert_helper(Node **root, int val)
{
    Node *newNode;

    if (*root == NULL) {
        printf("Inserimento elemento %d\n", val);
        newNode = (Node *) malloc( sizeof(Node) );
        if (!newNode) {
            fprintf(stderr, "Impossibile allocare memoria\n");
            return;
        }
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;

        *root = newNode;

        return;
    }

    if (val < (*root)->val) {
        tree_insert_helper(&((*root)->left), val);
    } else if (val > (*root)->val) {
        tree_insert_helper(&((*root)->right), val);
    } else {
        /* non aggiungere duplicati */
    }
}

void tree_clear(Tree * const t)
{
    tree_clear_helper(&(t->root));
}

void tree_clear_helper(Node **root)
{
    if (*root == NULL)   return;

    tree_clear_helper(&((*root)->left));
    tree_clear_helper(&((*root)->right));

    printf("Libero memoria per l'elemento %d\n", (*root)->val);
    free(*root);

    *root = NULL;
}
