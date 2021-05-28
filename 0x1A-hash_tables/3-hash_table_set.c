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
	hash_node_t *temp = NULL

	if (key != NULL && value != NULL)
	{
		new = key_index(key, ht->size);
		if (ht->array[new] != NULL)
		{
			if (strcmp(ht[new]->value, cpy_v) == 0)
			{
				temp = add_node((ht->array[new])->value, cpy_v, key);
				return (1);
			}
			(ht->array[new])->value = cpy_v;
		}
		return (1);
	}
	return (0);
}

/**
 * add_node - a function that adds node.
 * @head: pointer to a struct
 * @cpy_v: copy of value
 * @key: key of value
 *
 * Return: void
 */
hash_node_t *add_node(hash_node_t **head, char *cpy_v, const char *key)
{
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);
	temp->key = key;
	temp->value = cpy_v;
	temp->next = NULL;
	if (head == NULL)
	{
		(*head)->next = temp;
	}
	else
	{
		temp->next = *head;
		(*head) = temp;
	}
	return (temp);
}
