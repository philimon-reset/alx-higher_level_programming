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
	hash_table_t *temp;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			temp->array[i] = NULL;
		}
		return temp;
	}
	return NULL;
}
