#include "lists.h"

/**
 * free_listint -  free the malloc.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
