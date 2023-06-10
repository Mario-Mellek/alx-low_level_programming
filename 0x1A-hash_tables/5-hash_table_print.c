#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
