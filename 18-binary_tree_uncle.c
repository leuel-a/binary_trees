#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: If the node has an uncle, it returns a pointer to
 * the uncle node. Otherwise, it returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
