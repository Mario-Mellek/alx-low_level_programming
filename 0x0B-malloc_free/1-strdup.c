#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * _strdup - A function that returns
 * a pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string pointer
 * Return: returns a pointer to the string or NULL if fails
 */


char *_strdup(char *str)
{
	int size, i;
	char *arrP;

	if (str == NULL)
		return (NULL);

	size = 1;
	while (str[size] != '\0')
		size++;

	arrP = (char *)malloc(sizeof(char) * size);

	if (arrP == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		arrP[i] = str[i];
	}

	return (arrP);
}
