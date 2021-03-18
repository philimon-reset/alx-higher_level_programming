#include "lists.h"

/**
 * free_list - a function that frees linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
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
