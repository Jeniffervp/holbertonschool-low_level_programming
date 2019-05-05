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
	dlistint_t *new, *current;

	if (h == NULL)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (idx - 1 > 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		idx--;
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	new->prev = current;
	return (new);
}
