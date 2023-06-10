#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *h = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		h = ht->array[index];
		while (h != NULL)
		{
			temp = h;
			h = h->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		ht->array[index] = NULL;
	}
	free(ht->array);
	free(ht);
}
