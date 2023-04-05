#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: list head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
