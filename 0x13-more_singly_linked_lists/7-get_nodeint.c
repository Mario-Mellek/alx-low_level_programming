#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * nth node of a listint_t linked list.
 * @head: list head
 * @index: the index of the node.
 * Return: the node or NULL if it doesn't exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = head->next;
	}
	return (NULL);
}
