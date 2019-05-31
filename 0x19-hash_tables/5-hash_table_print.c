#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * Return: value associated with the element,or NULL if key not found
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	int flag;
	hash_node_t *tempo;

	if (ht == NULL)
		return;
	flag = 0;
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		for (tempo = ht->array[index]; tempo; tempo = tempo->next)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tempo->key, tempo->value);
		}

	}
	printf("}\n");
}
