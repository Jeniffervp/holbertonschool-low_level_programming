#include "lists.h"

/**
 * sum_listint -  sum all data.
 *@head: is the beginning of the list.
 *@index: index of the node.
 *
 * Return: The numbers of nodes.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (count == index)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
