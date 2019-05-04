#include <lists.h>

/**
 * free_dlistint - function that free a list.
 * @head: the list.
 * Return: nothin.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
