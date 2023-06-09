#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: the key, key can not be an empty string
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *temp;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->value = strdup(value);
	newNode->key = strdup(key);
	newNode->next = NULL;

	temp = ht->array[index];
	if (!temp)
		ht->array[index] = newNode;
	else
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				temp->value = strdup(value);
			if (!temp->next)
			{
				temp->next = newNode;
				break;
			}
			temp = temp->next;
		}
	}
	return (1);
}
