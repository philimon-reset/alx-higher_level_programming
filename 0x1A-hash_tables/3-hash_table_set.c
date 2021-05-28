#include "hash_tables.h"
/**
 * hash_table_set - set a node in array
 * @ht: hash table you want to add or update the key/value to
 * @key: key can not be an empty string
 * @value: value associated with the key
 *
 * Return: hash_table or NULL
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int new;
	int size = 0;
	char *cpy_v = strcpy(value);

	for (new = 0; ht[new] != NULL; new++)
		size++;
	if (key != NULL && value != NULL)
	{
		new = key_index(key, size);
		if (ht[new] != NULL)
			ht[new] = cpy_v;
		return (1);
	}
	return (0);
}
