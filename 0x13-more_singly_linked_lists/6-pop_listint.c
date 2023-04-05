#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int deleted;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	deleted = (*head)->n;

	free(*head);
	*head = temp;

	return (deleted);
}
