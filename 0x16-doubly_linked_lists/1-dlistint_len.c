#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: the list.
 * Return:  the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
