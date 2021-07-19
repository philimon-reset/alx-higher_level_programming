#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put in the new node
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;


	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	else if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
