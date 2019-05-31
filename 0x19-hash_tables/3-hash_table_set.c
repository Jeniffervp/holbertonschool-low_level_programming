#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key: is the key.
 * @value: is the value of the key.
 * @ht: hash table to add or update.
 * Return: 0 if fail, 1 if succeed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tempo;
	unsigned int index = 0;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	for (tempo = ht->array[index]; tempo; tempo = tempo->next)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = strdup(value);
			free(new);
			return (1);
		}
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
