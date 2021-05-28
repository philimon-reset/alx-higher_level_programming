#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: size of table
 *
 * Return: hash_table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *temp = NULL;
	hash_node_t *node = NULL;

	node = malloc(sizeof(node));
	if (node == NULL)
		return NULL;
	if (size > 0)
	{
		temp->size = size;
		for (i = 0; i < size; i++)
		{
			temp->array[i] = node;
		}
		return temp;
	}
	return NULL;
}
