#include "main.h"
#define NULL ((void *)0)
#include <stdlib.h>

/**
 * *create_array - A function that creates an
 * array of chars, and initializes it with a specific char.
 * @size: array size
 * @c: initialization character
 * Return: returns pointer to array or NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *array = (char *) malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		while (i < (int) size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
