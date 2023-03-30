#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to head of list
 * @str: string to be added to new node
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodePtr;
	list_t *lastNode;

	nodePtr = malloc(sizeof(nodePtr));
	if (nodePtr == NULL)
	{
		return (NULL);
	}
	nodePtr->str = strdup(str);

	if (nodePtr->str == NULL)
	{
		free(nodePtr);
		return (NULL);
	}
	nodePtr->len = strlen(str);
	nodePtr->next = NULL;


	if (*head == NULL)
	{
		*head = nodePtr;
		return (nodePtr);
	}

	lastNode = *head;

	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = nodePtr;

	return (nodePtr);
}
