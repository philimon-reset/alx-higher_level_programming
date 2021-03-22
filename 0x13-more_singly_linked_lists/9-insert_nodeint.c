#include "lists.h"

/**
 * insert_nodeint_at_index - returns the sum of all the data of a linked list
 * @head: pointer to a struct
 * @idx: index given
 * @n: data
 *
 * Return: struct needed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = head;
	int count = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
}
