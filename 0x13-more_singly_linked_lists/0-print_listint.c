#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list_t list.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t print_listint(const listint_t *h)
{
	const list_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		node++;
	}
	return (node);
}
