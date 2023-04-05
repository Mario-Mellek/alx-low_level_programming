#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: list head
 * Return: returns the head node’s data (n).
 */


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
