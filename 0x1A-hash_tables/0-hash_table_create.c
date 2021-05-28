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

	if (size > 0)
	{
		temp->size = size;
		temp->array = malloc(size * sizeof(temp));
		if (temp->array == NULL)
		{
			free(temp->array);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			temp->array[i] = NULL;
		return (temp);
	}
	return (NULL);
}
