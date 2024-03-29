#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
