#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @key: is the key.
 * @ht: hash table to add or update.
 * Return: value associated with the element,or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *tempo;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	for (tempo = ht->array[index]; tempo; tempo = tempo->next)
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
	return (NULL);
}
