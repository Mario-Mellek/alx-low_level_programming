#include "main.h"

/**
 * puts2 - A function that prints
 * every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: pointer paramater
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		count % 2 == 0 ?
			_putchar(str[count])
			: 0;
	}
	_putchar('\n');
}
