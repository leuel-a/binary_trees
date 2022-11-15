#include "binary_trees.h"

/**
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_balanced(tree->left) -
			binary_tree_height_balanced(tree->right));
}

/**
 * binary_tree_height_balanced - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the height
 *
 * Return: On success, it returns the height of the binary tree.
 * On error, it returns 0.
*/
size_t binary_tree_height_balanced(const binary_tree_t *tree)
{
	size_t leftH = 0, rightH = 0;
	
	if (tree == NULL)
		return (0);
	
	leftH = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	rightH = tree->right ? 1 + binary_tree_height(tree->right): 1;
	return((leftH > rightH) ? leftH : rightH);
}
