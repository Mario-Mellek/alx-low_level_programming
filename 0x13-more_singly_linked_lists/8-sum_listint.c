#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = NULL;

	if (head == NULL)
		return (0);

	for(temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
