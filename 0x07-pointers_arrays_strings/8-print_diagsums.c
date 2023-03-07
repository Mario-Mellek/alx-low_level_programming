#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the
 * sum of the two diagonals of a square matrix of integers.
 * @a: input array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int left, right = 0;

	i = 0;
	while (i < size)
	{
		left += a[i];
		a += size;
		i++;
	}
	a -= size;
	j = 0;
	while (j < size)
	{
		right += a[j];
		j++;
		a -= size;
	}
	printf("%d, %d\n", left, right);
}
