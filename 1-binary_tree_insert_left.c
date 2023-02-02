#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node
 * @parent: the parent of the new node
 * @value: value of the new node
 *
 * Return: On success, it returns the address of the new node.
 * Otherwise, it returns NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;

	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL, new->right = NULL;
		new->parent = parent;
	} else
	{
		parent->left->parent = new;
		new->left = parent->left, new->right = NULL;
		parent->left = new, new->parent = parent;
	}
	return (new);
}
