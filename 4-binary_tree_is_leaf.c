#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf node
 * @node: the node to be checked
 *
 * Return: If the node is a leaf node, it returns 1. Otherwise,
 * it returns 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (1 ? (!node->right && !node->left) : 0);
}
