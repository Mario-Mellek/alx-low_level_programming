#include "main.h"

/**
 * _isupper - A function that checks
 * for uppercase character.
 * @c: input value.
 * Return: returns 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
