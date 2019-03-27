#include "lists.h"

/**
 * delete_nodeint_at_index -  delete a  node.
 *@head: is the beginning of the list.
 *@index: index of the node.
 *
 * Return: The numbers of nodes.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int aux = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (aux < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		aux++;
	}
	current = temp->next->next;
	free(temp->next);
	temp->next = current;
	return (1);
}
