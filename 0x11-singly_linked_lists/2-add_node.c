#include "lists.h"

/**
 *_strlen - entry point
 *@s: a pointer to a word
 * Description: print tthe length of a word
 * Return: always 0
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * add_node -  adds a new node at the beginning of a  list.
 *@head: is the beginning of the list.
 *@str: contain the string.
 *
 * Return: The numbers of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t  *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
