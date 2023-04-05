#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = NULL;

	if (head == NULL)
		return NULL;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = head->next;
	}
	return (NULL);
}
