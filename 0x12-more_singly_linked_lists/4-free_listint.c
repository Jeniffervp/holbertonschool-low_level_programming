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
	int first = 0;


	while (head != NULL)
	{
		temp = head->next;
		if (first == 0)
		{
			free(head);
			first = 1;
		}
		free(head->next);
		head = temp;
	}
}
