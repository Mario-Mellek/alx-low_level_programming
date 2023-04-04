#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked listint_t list
 * @h: head pointer
 * Return: number of elements in list or 1 if h is null
 */


size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
		count++;

	return (count);
}
