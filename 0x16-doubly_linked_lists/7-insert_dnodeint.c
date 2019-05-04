#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the list.
 * @n: data.
 * @idx: index of the list where the new node should be added.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
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
