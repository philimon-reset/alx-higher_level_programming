#include "binary_trees.h"


/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put in the new node
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
