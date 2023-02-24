#include "main.h"

/**
 * print_square - A function that prints
 * a square, followed by a new line.
 * @size: input value
 */

void print_square(int size)
{
	while (size > 0)
	{
		_putchar('#');
		size--;
	}
	_putchar('\n');
}
