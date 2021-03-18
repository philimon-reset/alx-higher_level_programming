#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t print_list(const list_t *h)
{
	list_t *temp = h;
	int node = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (temp != NULL)
		{
			printf("[%d] %s\n", h.len, h->str);
			temp = temp->next;
			node++;
		}
	}
	return (node);
}
