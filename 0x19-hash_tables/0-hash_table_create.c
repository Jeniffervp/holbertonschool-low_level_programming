#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size: is the size of the array
 * Return: pointer to the new hash table and Null if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int a;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		new->array[a] = NULL;
	new->size = size;
	return (new);
}
