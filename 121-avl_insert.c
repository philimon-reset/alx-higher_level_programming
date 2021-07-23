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

	balance = binary_tree_balance(*node);

	if (balance > 1 && value < (*node)->left->n)
	{
		*node = binary_tree_rotate_right(*node);
		return;
	}

	if (balance < -1 && value > (*node)->right->n)
	{
		*node = binary_tree_rotate_left(*node);
		return;
	}

	if (balance > 1 && value > (*node)->left->n)
	{
		(*node)->left = binary_tree_rotate_left((*node)->left);
		*node = binary_tree_rotate_right(*node);
		return;
	}

	if (balance < -1 && value < (*node)->right->n)
	{
		(*node)->right = binary_tree_rotate_right((*node)->right);
		*node = binary_tree_rotate_left(*node);
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
