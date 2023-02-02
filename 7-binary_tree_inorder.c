#include "binary_trees.h"

/**
 * binary_tree_inorder - prints a binary tree based on inorder traversal
 * @tree: the tree to be printed
 * @func: function to be used on every visit
 *
 * Return: Always nothing.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
