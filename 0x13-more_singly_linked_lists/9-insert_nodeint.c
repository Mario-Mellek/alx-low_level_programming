#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: list head
 * @idx: the index of the list where the new node
 * should be added.
 * @n: node value
 * Return: the address of the new node, or NULL if it failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	temp = *head;

	for (i = 0; i < (idx - 1) && (temp != NULL); i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
