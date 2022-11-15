#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node as the right-child of
 * another node
 * @parent: is the pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Description: If the parent already has a right-child, the new node
 * will take its place, and the old right-child will be set as the
 * right-child of the new node.
 *
 * Return: On success, it returns the address of the new node. On error,
 * it returns NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->parent = new;
	}
	return (new);
}
