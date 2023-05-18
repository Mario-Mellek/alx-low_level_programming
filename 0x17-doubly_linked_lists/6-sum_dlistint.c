#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t total;

	for (total = 0 ; temp != NULL; temp = temp->next)
	{
		total += temp->n;
	}
	return (total);
}
