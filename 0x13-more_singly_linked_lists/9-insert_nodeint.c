#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a struct
 * @idx: index given
 * @n: data
 *
 * Return: struct needed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	int count = 0;

	while (idx--)
	{
		if (idx == 0)
		{
			temp == (*head);
}
