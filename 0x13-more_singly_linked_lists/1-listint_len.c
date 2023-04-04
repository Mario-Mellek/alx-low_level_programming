#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (1);

	for (count = 0; h != NULL; h= h->next)
		count++;
	return (count);
}
