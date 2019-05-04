#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a  list.
 * @head: is the beginning of the list.
 * @n: contain the integer.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t  *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		temp = *head;
		if (*head != NULL)
			temp->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
