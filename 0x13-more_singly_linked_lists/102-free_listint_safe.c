#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list.
 * @h: pointer to head pointer
 * Return: the size of the list that was free’d
 */



size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	return (count);
}
