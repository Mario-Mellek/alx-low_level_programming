#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node
 * at the end of a dlistint_t list.
 * @head: pointer to the list
 * @n: value to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *temp = *head;

		for (; temp->next != NULL; temp = temp->next)
			;
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
