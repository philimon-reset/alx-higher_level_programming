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
	dlistint_t *new_mode = malloc(sizeof(dlistint_t));
	unsigned int size = 0;
	dlistint_t *temp = get_dnodeint_at_index2(*h, idx, size);

	if (new_mode == NULL || temp == NULL)
		return (NULL);
	new_mode->n = n;
	new_mode->next = NULL;
	new_mode->prev = NULL;
	if (idx == 0)
	{
		new_mode = add(*h, n);
		return (new_mode);
	}
	if (idx == size)
	{
		new_mode = end(h, n);
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
 * get_dnodeint_at_index2 - get the address of node at given index.
 * @head: head of list.
 * @index: index of needed node.
 *
 * Return: address of indexed node.
 */

dlistint_t *get_dnodeint_at_index2(dlistint_t *head, unsigned int index, unsigned int size)
{
	dlistint_t *temp = head;
	dlistint_t *temp2 = head;
	unsigned node = 0;

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
			return (temp);
		node++;
		temp = temp->next;
	}
	if (node == index)
		return (temp);
	return (NULL);
}

/**
 * add - add to the begining of the list.
 * @head: head of list.
 * @n: value of new list
 *
 * Return: returns the address of the new element.
 */
dlistint_t *add(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
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
 * @n: value of the node.
 *
 * Return: address of new node.
 */

dlistint_t *end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
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
