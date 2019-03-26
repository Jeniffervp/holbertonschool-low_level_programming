#include "lists.h"

/**
 * pop_listint -  delete node at the beginning of a  list.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int old_n;

	if (*head == NULL || head == NULL)
		return (0);
	temp = (*head)->next;
	old_n = (*head)->n;
	free(*head);
	*head = temp;
	return (old_n);
}
