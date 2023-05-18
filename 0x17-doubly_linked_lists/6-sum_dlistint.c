#include "lists.h"

/**
 * sum_dlistint - A function that returns the
 * sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the dList
 * Return: return the total of n or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t total;

	for (total = 0 ; temp != NULL; temp = temp->next)
	{
		total += temp->n;
	}
	return (total);
}
