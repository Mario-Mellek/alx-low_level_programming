#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes
 * the node at index of a linked list
 * @head: pointer to head
 * @index: index to delete
 * Return: 1 if successful, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = NULL, *prev = NULL;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (i = 0; (i < index) && (temp != NULL); temp = temp->next)
	{
		prev = temp;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	temp = prev;

	return (1);
}
