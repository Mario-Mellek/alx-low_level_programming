#include "main.h"

/**
 * _isalpha - A  function that checks
 * for alphabetic character.
 * @c: input letter
 * Return: if letter = 1 else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
