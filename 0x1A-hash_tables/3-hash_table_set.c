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


	if (key == NULL && value == NULL)
	{
		new = key_index((unsigned char *)key, ht->size);
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->key = strdup(key);
		temp->value = strdup(value);
		temp->next = NULL;
		if (check(ht, key))
			(ht->array[new])->value = temp->value;
		if (ht->array[new] == NULL)
			ht->array[new] = temp;
		else
		{
			temp->next = ht->array[new];
			ht->array[new] = temp;
		}
		return (1);
	}
	return (0);
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
