#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list
 * @str: string to be added to new node
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodePtr;

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
	nodePtr->next = *head;
	*head = nodePtr;

	return (nodePtr);
}
