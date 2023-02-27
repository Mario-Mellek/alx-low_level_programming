#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * @str: pointer paramater.
 */


void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		char letter = str[count];

		_putchar(letter);
	}
	_putchar('\n');
}
