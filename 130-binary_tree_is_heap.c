#include "binary_trees.h"

/**
 * array_to_bst - array_to_bst
 * @array: array to be checked
 * @size: size
 *
 * Return: bst
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *tree = NULL, *tree2 = NULL;

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		tree2 = bst_insert(&tree, array[i]);
		if (tree2 == NULL)
			continue;
	}
	return (tree);
}
