#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates
 * an array of integers.
 * @min: array min
 * @max: array max
 * Return: returns a pointer to the array if successful otherwise null
 */

int *array_range(int min, int max)
{
	int *arrPtr, i;

	if (min > max)
		return (NULL);

	arrPtr = malloc(sizeof(int) * ((max - min) + 1));

	if (arrPtr == NULL)
		return (NULL);

	i = 0;
	while (max >= min + i)
	{
		arrPtr[i] = min + i;
		i++;
	}
	return (arrPtr);
}
