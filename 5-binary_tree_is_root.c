#include "binary_trees.h"

/**
 * binary_tree_is_root - checks whether a node is a root node
 * @node: the node to be checked
 *
 * Return: If the node is a root node, it returns 1. Otherwise,
 * it returns 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (1 ? !node->parent : 0);
}
