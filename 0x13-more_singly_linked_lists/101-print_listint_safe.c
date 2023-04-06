#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a
 * listint_t linked list.
 * @head: pointer to the head
 * Return: the number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	for (count = 0; head != NULL; head = head->next)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		count++;

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			exit(98);
		}
	}
	return (count);
}
