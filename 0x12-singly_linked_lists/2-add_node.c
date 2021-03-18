#include "lists.h"

/**
 * add_node - a function that adds node.
 * @head: pointer to a struct
 * @str: name of new node
 *
 * Return: struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	strdup(str, (temp->str));
	temp->len = _strlen(str);
	temp->next = NULL;
	return (temp);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
