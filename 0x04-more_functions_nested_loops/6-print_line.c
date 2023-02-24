#include "main.h"

/**
 * print_line - A function that draws
 * a straight line in the terminal.
 * @n: input value
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
