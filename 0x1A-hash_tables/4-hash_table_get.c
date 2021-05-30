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
	unsigned long int new;
	hash_node_t *temp = ht->array[new];

	if (ht == NULL)
		return (NULL);
	if (key != NULL)
	{
		new = key_index((unsigned char *)key, ht->size);
		if (ht->array[new] == NULL)
			return (NULL);
		else if (check(ht, key))
		{
			while (temp->key != key)
				temp = temp->next;		
			return (temp->value);
		}
		else
			return ((ht->array[new])->value);
	}
	return (NULL);
}

/**
 * check - check if the current linked ist is being overwirten
 * @ht: hash table
 * @key: key to be checked
 *
 * Return: 1 if same 0 if not
 */
int check(hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int new;

	new = key_index((unsigned char *)key, ht->size);
	temp = ht->array[new];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (1);
		temp = temp->next;
	}
	return (0);
}
