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

	if (len % 2 != 0)
	{
		mid = (len / 2) + 1;
	} else
	{
		mid = (len / 2);
	}

	for (; mid < len; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
