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
		if (count <= index)
		{
			if (count == index)
			{
				temp = head;
				break;
			}
		}
		else
		{
			return (NULL);
		}
		count++;
		head = head->next;
	}
	return (temp);
}
