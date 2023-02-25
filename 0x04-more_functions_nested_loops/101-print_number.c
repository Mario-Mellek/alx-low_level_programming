#include "main.h"

/**
 * print_number - A function that
 * prints an integer.
 * @n: input value
 */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
