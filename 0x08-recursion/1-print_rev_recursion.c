#include "main.h"

/**
 * _print_rev_recursion - A function that prints
 * a string in reverse.
 * @s: Input param
 */


void _print_rev_recursion(char *s)
{
	int size = 13;
	char *letter = s + size;

	if (*letter != '\n')
	{
		_putchar(*letter);
		s--;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
