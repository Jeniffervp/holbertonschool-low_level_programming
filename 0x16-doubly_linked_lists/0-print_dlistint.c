#include "lists.h"

/**
 * print_dlistint - print all the elements of a list.
 * @h: the list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cont;

	if (h == NULL)
		return (0);
	for (cont = 0; h != NULL; cont++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
