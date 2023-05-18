#include "lists.h"

/**
 * dlistint_len - A function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: the pointer to the lists's head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	dlistint_t *temp;

	temp = (dlistint_t *)h;

	for (i = 0; temp != NULL; temp = temp->next, i++)
	{
		if (temp->next == h)
			break;
	}
	return (i);
}
