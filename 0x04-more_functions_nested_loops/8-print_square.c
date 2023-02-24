#include "main.h"

/**
 * print_square - A function that prints
 * a square, followed by a new line.
 * @size: input value
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size ; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
