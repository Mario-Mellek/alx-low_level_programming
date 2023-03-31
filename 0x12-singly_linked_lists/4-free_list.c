#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: pointer to the head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
