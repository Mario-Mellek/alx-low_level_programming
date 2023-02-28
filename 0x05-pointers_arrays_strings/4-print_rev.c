#include "main.h"

/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer paramater.
 */


void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
