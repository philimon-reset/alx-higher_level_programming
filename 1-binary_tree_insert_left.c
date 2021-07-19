#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put in the new node
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;


	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	else if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;
	return (node);
}
