#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a binary tree
 * @tree: tree to be measured
 *
 * Return: The depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
