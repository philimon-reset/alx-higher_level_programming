#include "binary_trees.h"

/**
 * count_nodes - counts the number of nodes in a tree
 * @root: root node of the tree
 *
 * Return: number of nodes
 */
int count_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}

/**
 * is_complete -  checks if a binary tree is complete
 * @root: root node of the tree
 * @index: index of the node
 * @number_nodes: number of nodes in the whole tree
 *
 * Return: 1 for true, 0 otherwise
 */
int is_complete(binary_tree_t *root, int index, int number_nodes)
{
	int left_complete = 0, right_complete = 0;

	if (root == NULL)
		return (1);
	if (index >= number_nodes)
		return (0);
	left_complete = is_complete(root->left, 2 * index + 1, number_nodes);
	right_complete = is_complete(root->right, 2 * index + 2, number_nodes);
	return (left_complete && right_complete);
}

/**
 * binary_tree_is_heap - checks if a binary tree is a valid Max Binary Heap
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap, and 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int max_left, max_right;

	if (tree == NULL)
		return (0);
	if (!is_complete((binary_tree_t *)tree, 0, count_nodes(tree)))
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right == NULL)
		return (tree->n > tree->left->n);
	if (tree->n > tree->right->n && tree->n > tree->left->n)
	{
		max_left = binary_tree_is_heap(tree->left);
		max_right = binary_tree_is_heap(tree->right);
		return (max_left && max_right);
	}
	return (0);
}
