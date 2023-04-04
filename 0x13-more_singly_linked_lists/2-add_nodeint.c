#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a listint_t list.
 * @head: Head pointer
 * @n: node value
 * Return: returns the newly created node address or NULL
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
