#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 * Return: value associated with the element,or NULL if key not found
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tempo, *aux;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (tempo = ht->array[index]; tempo; )
		{
			aux = tempo;
			tempo = tempo->next;
			free(aux->value);
			free(aux->key);
			free(aux);
		}

	}
	free(ht->array);
	free(ht);
}
