#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree using preorder traversal
 * @tree: tree to be printed
 * @func: function to be used on each visit
 *
 * Return: Always nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
