#include "lists.h"

/**
 * free_dlistint - A function that frees a
 * dlistint_t list.
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL, *current = head;

	for (; current != NULL; current = current->next)
	{
		temp = current;
		free(temp);
	}
}
