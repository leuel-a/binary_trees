#include "binary_trees.h"

/**
 * binary_tree_balance - find the balance factor of a tree
 * @tree: binary tree to be checked
 *
 * Return: The balance factor of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftH, rightH;

	if (!tree)
		return (0);
	leftH = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	rightH = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (leftH - rightH);
}
