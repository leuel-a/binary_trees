#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the total number of nodes that have
 * atleast one child in a binary tree
 * @tree: the bianry tree
 *
 * Return: On success, it returns the number of childs that have
 * atleast one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (binary_tree_nodes(tree->right) + 1 + binary_tree_nodes(tree->left));
}
