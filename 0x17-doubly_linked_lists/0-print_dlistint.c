#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a dlistint_t list.
 * @h: pointer to the list's head
 * Return: return the total number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; temp = temp->next, i++)
	{
		printf("%d\n", temp->n);
		if (temp->next == h)
		{
			break;
		}
	}
	return (i);
}
