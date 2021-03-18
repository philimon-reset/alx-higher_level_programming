#include "lists.h"

/**
 * add_node_end - a function that adds node to end of file.
 * @head: pointer to a struct
 * @str: name of new node
 *
 * Return: struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(const char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
