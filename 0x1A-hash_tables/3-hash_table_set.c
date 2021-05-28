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
	hash_node_t *temp = NULL;
	hash_node_t *temp2 = NULL;


	if (key != NULL || ht != NULL)
	{
		new = key_index((unsigned char *)key, ht->size);
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->key = strdup(key);
		temp->value = strdup(value);
		temp->next = NULL;
		temp2 = ht->array[new];
		while (temp2 != NULL)
		{
			if (strcmp(key, temp2->key) == 0)
				temp2->value = value;
			temp2 -> temp2->next;
		}
		if (ht->array[new] == NULL)
			ht->array[new] = temp;
		else
		{
			temp->next = ht->array[new];
			(ht->array[new])->next = temp;
		}
		return (1);
	}
	return (0);
}
