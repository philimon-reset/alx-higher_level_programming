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
	listint_t *temp = head;
	unsigned int count;

	if (temp == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{	
		if (count == index)
		{
			return temp;
			break;
		}
		count++;
		temp = temp->next;
	}
	if (count != index)
		return (NULL);
}
