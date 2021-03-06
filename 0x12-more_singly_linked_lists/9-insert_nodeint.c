#include "lists.h"

/**
 * insert_nodeint_at_index -  return nth node.
 *@head: is the beginning of the list.
 *@idx: index of the node.
 *@n: contain data.
 *
 * Return: The numbers of nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head == NULL)
		return (new);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (idx - 1 > 0)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		idx--;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
