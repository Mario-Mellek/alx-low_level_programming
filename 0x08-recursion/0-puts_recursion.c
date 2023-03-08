#include "main.h"

/**
 * _puts_recursion - A function that prints a string,
 * followed by a new line.
 * @s: pointer to string arg.
 */

void _puts_recursion(char *s)
{
	char *letter = s;

	if (*letter != '\0')
	{
		_putchar(*letter);
		_puts_recursion(letter + 1);
	}
	else
	{
		_putchar('\n');
	}
}
