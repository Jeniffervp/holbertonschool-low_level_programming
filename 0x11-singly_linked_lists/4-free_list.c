#include "lists.h"

/**
 * free_list -  free the malloc.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
