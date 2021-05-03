#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given index.
 * @h: head of list.
 * @idx: index to add in.
 * @n: value to add.
 *
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_mode;
	unsigned int size = 0;
	dlistint_t *temp = NULL, *op = NULL;

	if (h == NULL)
		return (NULL);
	op = *h;
	while (op != NULL)
	{
		size += 1;
		op = op->next;
	}
	if (idx > size)
		return (NULL);
	temp = get(*h, idx);
	new_mode = malloc(sizeof(dlistint_t));
	if (new_mode == NULL)
		return (NULL);
	new_mode->n = n;
	new_mode->next = NULL;
	new_mode->prev = NULL;
	if (idx == 0 || size == 0)
	{
		new_mode = add(h, new_mode);
		return (new_mode);
	}
	if (idx == size)
	{
		new_mode = end(h, new_mode);
		return (new_mode);
	}
	if (temp->prev != NULL)
	{
		new_mode->prev = temp->prev;
		(temp->prev)->next = new_mode;
	}
	new_mode->next = temp;
	temp->prev = new_mode;
	return (new_mode);
}

/**
 * get - get the address of node at given index.
 * @head: head of list.
 * @index: index of needed node.
 *
 * Return: address of indexed node.
 */

dlistint_t *get(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	dlistint_t *temp2 = head;
	unsigned int node = 0, size = 0;

	while (temp2 != NULL)
	{
		size++;
		temp2 = temp2->next;
	}
	if (index > size)
		return (NULL);
	while (temp != NULL)
	{
		if (index == node)
			break;
		node++;
		temp = temp->next;
	}
	if (node != index)
		return (NULL);
	return (temp);
}

/**
 * add - add to the begining of the list.
 * @head: head of list.
 * @new_node: value of new list
 *
 * Return: returns the address of the new element.
 */
dlistint_t *add(dlistint_t **head, dlistint_t *new_node)
{
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
/**
 * end - add new node at the end of the list.
 * @head: head of list.
 * @new_node: value of the node.
 *
 * Return: address of new node.
 */

dlistint_t *end(dlistint_t **head, dlistint_t *new_node)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
