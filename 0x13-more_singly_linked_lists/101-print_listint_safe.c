#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	for (count = 0; head != NULL; head= head->next)
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
