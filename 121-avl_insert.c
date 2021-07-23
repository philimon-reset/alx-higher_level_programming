#include "binary_trees.h"

/**
 * Cbalance - checks the balance of each node
 *
 * @node: pointer to the node
 * @value: input value
 * Return: no return
 */
void Cbalance(avl_t **tree, int value)
{
	int balance;

	balance = binary_tree_balance(*tree);

	if (balance > 1 && value < (*tree)->left->n)
	{
		*tree = binary_tree_rotate_right(*tree);
		return;
	}

	if (balance < -1 && value > (*tree)->right->n)
	{
		*tree = binary_tree_rotate_left(*tree);
		return;
	}

	if (balance > 1 && value > (*tree)->left->n)
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
		return;
	}

	if (balance < -1 && value < (*tree)->right->n)
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
		*tree = binary_tree_rotate_left(*tree);
		return;
	}
}

/**
 * insert - checks if node is inserted
 *
 * @tree: tree root
 * @value: node value
 * Return: pointer to the new node
 */
avl_t *insert(avl_t **tree, int value)
{
	avl_t *node;

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			node = insert(&((*tree)->left), value);
			if (node)
				Cbalance(tree, value);
			return (node);
		}
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			node = insert(&((*tree)->right), value);
			if (node)
				Cbalance(tree, value);
			return (node);
		}
	}

	return (NULL);
}

/**
 * avl_insert - inserts a value in a AVL Tree
 *
 * @tree: tree root
 * @value: node value
 * Return: pointer to the new node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *node;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	node = insert(tree, value);

	return (node);
}
