#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree in a postorder traversal
 * @tree: the tree to be traversed
 * @func: function used of every visit
 *
 * Return: Always nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
