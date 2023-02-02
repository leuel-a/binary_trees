#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as the right
 * child of a parent node
 * @parent: parent node
 * @value: value of the node
 *
 * Return: On success, it returns the address of the new node. Otherwise,
 * it returns NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right, new->left = NULL;
		parent->right = new, new->parent = parent;
	} else
	{
		new->parent = parent;
		parent->right = new;
		new->right = NULL, new->left = NULL;
	}
	return (new);
}
