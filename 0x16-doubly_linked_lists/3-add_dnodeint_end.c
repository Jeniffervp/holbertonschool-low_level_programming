#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: the list.
 * @n: data.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new_node, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
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
		(*head)->prev = NULL;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
