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
	unsigned long int new;
	char *cpy_v = strdup(value);
	unsigned char *cpy_k = strdup(key);
	hash_node_t *temp = NULL;


	if (key != NULL && value != NULL)
	{	
		new = key_index(cpy_k, ht->size);
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->key = cpy_k;
		temp->value = cpy_v;
		temp->next = NULL;
		if (ht->array[new] == NULL)
			(ht->array[new])->next = temp;
		else
		{
			temp->next = ht->array[new];
			ht->array[new] = temp;
		}
		return (1);
	}
	return (0);
}
