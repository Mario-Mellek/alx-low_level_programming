#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 * @key: The key to hash and store in the hash table.
 * @size: The size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored.
 * returns 0 if an error occurs
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int result = hash % size;

	if (!key)
		return (0);
	if (size == 0)
		return (0);

	return (result);
}
