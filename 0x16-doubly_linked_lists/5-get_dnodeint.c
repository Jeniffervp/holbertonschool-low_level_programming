#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: the list.
 * @index: index of the node, starting from 0.
 * Return: the nth node of a linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (count == index)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}
