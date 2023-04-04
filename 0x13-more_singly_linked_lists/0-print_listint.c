#include "lists.h"
#include <stdio.h>

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
