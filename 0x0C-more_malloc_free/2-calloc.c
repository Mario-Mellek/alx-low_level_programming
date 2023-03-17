#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory
 * for an array, using malloc.
 * @nmemb: number of array elemts
 * @size: amount of bytes
 * Return: returns a pointer to the arr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPtr;
	int i;
	char *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrPtr = malloc(size * nmemb);

	if (arrPtr == NULL)
		return (NULL);

	i = 0;
	zero = arrPtr;
	while (i < (int) (nmemb * size))
	{
		zero[i] = 0;
		i++;
	}
	return (arrPtr);
}
