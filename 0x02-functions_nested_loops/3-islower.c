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
		return (1);
	}
	return (0);
}
