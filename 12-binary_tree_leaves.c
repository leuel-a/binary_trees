#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number
 * of leaves
 *
 * Return: On success, it returns the total number of leaves of the binary
 * tree. Otherwise, it returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
