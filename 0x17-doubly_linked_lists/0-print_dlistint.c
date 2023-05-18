#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; temp = temp->next, i++)
	{
		printf("%d\n", temp->n);
	}
	return (i);
}
