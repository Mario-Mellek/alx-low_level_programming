#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	} else
	{	
		listint_t *temp = *head;

		for (; temp->next != NULL; temp = temp->next)
			;
		temp->next = newNode;
	}
	return (newNode);
}
