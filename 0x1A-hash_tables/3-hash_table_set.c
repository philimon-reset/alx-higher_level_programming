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
		{
			if (strcmp(ht[new]->value, cpy_v) == 0)
			{
				add_node(ht[new]->value, cpy_v, key);
				return (1);
			}
			ht[new] = cpy_v;
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
void *add_node(hash_node_t **head, const char *cpy_v, const char *key)
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
}
