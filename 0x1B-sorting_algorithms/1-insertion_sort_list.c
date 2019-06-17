#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: Nodes with doubly linked list structure to be sort
 * by their data integers
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert;

	if (list == NULL)
		return;
	insert = (*list)->next;
	while (insert)
	{
		while (insert->prev && insert->n < insert->prev->n)
		{
			insert->prev->next = insert->next;
			if (insert->next)
				insert->next->prev = insert->prev;
			insert->next = insert->prev;
			insert->prev = insert->prev->prev;
			insert->next->prev = insert;
			if (!insert->prev)
				*list = insert;
			else
				insert->prev->next = insert;
			print_list(*list);
		}
		insert = insert->next;
	}
}
