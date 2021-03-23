#include "lists.h"

/**
 * get_nodeint_at_index - returns the number of elements in a linked list
 * @head: pointer to a struct
 * @index: index to be found
 *
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int count = 0;

	while (head != NULL)
	{
		temp = head;
		if (count == index)
		{
			return (temp);
		}
		count++;
		head = head->next;
	}
}
