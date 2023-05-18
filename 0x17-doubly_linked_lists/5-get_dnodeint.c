#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t i;

	for (i = 0; temp != NULL && i < index; temp = temp->next, i++)
	{
		if (i == index)
			break;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
