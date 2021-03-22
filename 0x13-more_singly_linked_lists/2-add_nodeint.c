#include "lists.h"

/**
 * add_nodeint - a function that adds node.
 * @head: pointer to a struct
 * @n: name of new node
 *
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->len = n;
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
