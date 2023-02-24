#include "main.h"

/**
 * print_triangle - A function that prints a
 * triangle, followed by a new line.
 * @size: input value indicating
 * the size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;
			int box = 0;

			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			while (box < i + 1)
			{
				_putchar('#');
				box++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
