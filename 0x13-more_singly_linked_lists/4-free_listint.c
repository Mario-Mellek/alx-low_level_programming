#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: list head
 */

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
