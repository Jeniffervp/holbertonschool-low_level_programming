#include "lists.h"

/**
 * free_listint2 -  free the malloc.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	*head = NULL;
}
