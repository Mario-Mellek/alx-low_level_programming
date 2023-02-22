#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints all
 * natural numbers from n to 98,
 * followed by a new line.
 * @n: starting point;
 * Return: void
 */

void print_to_98(int n)
{
	int target = 98;

	if (n > target)
	{
		for (n = n; n > target; n--)
		{
			printf("%d, ", n);
		}
	} else if (n < target)
	{
		for (n = n; n < target; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", target);
}
