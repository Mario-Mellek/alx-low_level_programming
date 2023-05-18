#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL, *current = head;

	for (; current != NULL; current = current->next)
	{
		temp = current;
		free(temp);
	}
}
