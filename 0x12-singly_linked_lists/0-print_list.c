#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (count);
}
