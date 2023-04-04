#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	
	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
