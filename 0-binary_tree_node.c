#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: is the pointer to the parent node to create
 * @value: is the value to put in the new node
 *
 * Return: On success, it returns the address of the new
 * node. On error, it returns NULL.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
