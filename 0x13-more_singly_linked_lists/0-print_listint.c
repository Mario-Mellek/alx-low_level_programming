#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the
 * elements of a listint_t list.
 * @h: head of the list.
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = NULL;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%i\n", temp->n);
		count++;
	}
	return (count);
}
