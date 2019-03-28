#include "lists.h"

/**
 * sum_listint -  sum all data.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
