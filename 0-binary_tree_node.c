#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node in a binary tree
 * @parent: is the parent node of the node to be created
 * @value: value to be stored in the new node
 *
 * Return: On success, it returns the address of the new node.
 * Otherwise, it returns NULL.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return (NULL);

    new->parent = parent;
    new->n = value;
    new->left = NULL, new->right = NULL;
    return (new);
}
