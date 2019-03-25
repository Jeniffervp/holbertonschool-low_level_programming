#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the beginning of a  list.
 *@head: is the beginning of the list.
 *@n: contain the string.
 *
 * Return: The numbers of nodes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t  *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
