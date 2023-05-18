#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list.
 * @head: pointer to the list
 * @index: the index of the node
 * Return: the node at index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t i;

	for (i = 0; temp != NULL && i < index; temp = temp->next, i++)
	{
		if (i == index)
			break;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
