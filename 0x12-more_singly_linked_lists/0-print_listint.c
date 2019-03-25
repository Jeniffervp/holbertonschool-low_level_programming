#include "lists.h"

/**
 * print_listint - print all the elements of a list.
 *@h: coontain the elements to print.
 *
 * Return: The numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
