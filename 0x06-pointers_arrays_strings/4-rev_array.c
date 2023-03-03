#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 * i is the itirator while j is acting as a
 * temporary variable to hold an element of the array
 * @a: Array pointer
 * @n: n of elements
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
