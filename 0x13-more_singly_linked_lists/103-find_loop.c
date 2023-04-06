#include "lists.h"

/**
 * find_listint_loop - A function that finds
 * the loop in a linked list.
 * @head: pointer to head of list
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
