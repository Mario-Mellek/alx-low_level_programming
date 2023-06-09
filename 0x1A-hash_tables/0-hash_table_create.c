#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
	{
		return (NULL);
	}

	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}
	return (hashTable);
}
