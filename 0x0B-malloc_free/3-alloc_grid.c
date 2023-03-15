#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A  function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: width of the 2D array
 * @height: height of the 2D array
 * Return: return a pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **mArr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	mArr = (int **) malloc(sizeof(int *) * height);

	if (mArr == NULL)
		return (NULL);

	while (i < height)
	{
		mArr[i] = malloc(sizeof(int) * width);
		if (mArr[i] == NULL)
		{
			free(mArr);
			return (NULL);
		}
		i++;
	}
	return (mArr);
}
