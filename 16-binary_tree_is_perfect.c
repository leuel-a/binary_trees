#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If the tree is perfect, it returns 1. Otherwise, it
 * returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check, depth, level;

	if (tree == NULL)
		return (0);
	level = 0;
	depth  = find_depth_left(tree);
	check = isPerfect(tree, depth, level);
	return (check);
}

/**
 * find_depth_left - finds the depth of the left most leaf
 * in a binary tree
 * @tree: is a pointer to the tree to measure the left most
 * depth
 *
 * Return: The depth of the left most node
 */
int find_depth_left(const binary_tree_t *tree)
{
	return (!tree ? 0 : 1 + find_depth_left(tree->left));
}

/**
 * isPerfect - helper function to find if a binary tree is perfect
 * @depth: this is the left most depth of the tree
 * @level: this is the level where to the check is happening
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If the tree is perfect, it returns 1. Otherwise, it
 * returns 0.
 */
int isPerfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree->left && !tree->right)
		return (depth == (level + 1));
	if (!tree->left || !tree->right)
		return (0);
	return (isPerfect(tree->left, depth, level + 1) &&
			isPerfect(tree->right, depth, level + 1));
}
