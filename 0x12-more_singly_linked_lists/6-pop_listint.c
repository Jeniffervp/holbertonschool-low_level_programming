#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a  list.
 *@head: is the beginning of the list.
 *@n: contain the integer.
 *
 * Return: The numbers of nodes.
 */

int pop_listint(listint_t **head)
{
	int old_n = (*head)->n;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	free(*head);
	*head = (*head)->next;
	return (old_n);
}
