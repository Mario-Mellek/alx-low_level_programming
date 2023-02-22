#include "main.h"

/**
 * _islower - A function that checks
 * for lowercase character.
 * @c: c is the letter inpt.
 * Return: lowercase = 1 else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		_putchar('\n');
		return (1);
	}
	_putchar('0');
	_putchar('\n');
	return (0);
}
