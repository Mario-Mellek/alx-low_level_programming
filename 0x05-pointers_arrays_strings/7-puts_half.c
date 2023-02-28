#include "main.h"

/**
 * puts_half - A function that prints
 * half of a string, followed by a new line.
 * @str: passed in pointer
 */


void puts_half(char *str)
{
	int len, mid;

	for (len = 0; str[len] != '\0'; len++)
		;
	for (mid = (len / 2)+1; mid < len; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
