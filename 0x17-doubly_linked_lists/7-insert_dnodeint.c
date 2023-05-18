#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *current = *h;
	size_t i;

	for (i = 0; current != NULL && i < idx - 1;
			current = current->next, i++)
		;
	if (current == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = current;
	newNode->next = current->next;

	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;
	return (newNode);
}
