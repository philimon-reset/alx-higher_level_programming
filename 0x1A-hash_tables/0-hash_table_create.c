#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: size of table
 *
 * Return: hash_table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *temp = NULL;
	hash_node_t **node = NULL;

	temp = malloc(sizeof(hash_table_t));
	if (temp == NULL)
		return (NULL);
	temp->size = size;
	node = malloc(sizeof(hash_node_t*) * size);
	if (node == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (i = 0; i != size; i++)
	{
		node[i] = NULL;
	}
	temp->array = node;
	return (temp);
}
