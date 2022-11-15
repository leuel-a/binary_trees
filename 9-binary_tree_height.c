#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the height
 *
 * Return: On success, it returns the height of the binary tree.
 * On error, it returns 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (tree == NULL)
		return (0);

	leftH = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightH = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((leftH > rightH) ? leftH : rightH);
}
