#include "hash_tables.h"
/**
 * hash_table_get - set a node in array
 * @ht: hash table you want to add or update the key/value to
 * @key: key can not be an empty string
 *
 * Return: hash_table or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int new, i;
	hash_node_t *temp = ;

	if (ht == NULL)
		return (NULL);
	if (key != NULL)
	{
		new = key_index(key, ht->size);
		if (ht->array[new] == NULL)
			return (NULL);
		else
			return ((ht->array[new])->value);
	}
	return (NULL);
}
		
