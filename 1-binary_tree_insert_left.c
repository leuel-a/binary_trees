#include "binary_trees.h"

/**
 * bianry_tree_insert_left - inserts a node as a left-child of
 * another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * 
 * Description: If the parent already has a left-child, the new node
 * will take its place, and the old left-child will be set as the
 * left-child of the new node.
 * 
 * Return: On success, it returns a pointer to the new node. On
 * error, it returns NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new, *temp;

    if (parent == NULL)
        return NULL;

    new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL);
    
    if (parent->left == NULL)
        parent->left = new;
    else
    {
        temp = parent->left;
        parent->left = new;
        new->left = temp;
        temp->parent = new;
    }
    return (new);
}