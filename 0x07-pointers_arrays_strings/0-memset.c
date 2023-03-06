#include "main.h"

/**
 * _memset - A function that fills
 * memory with a constant byte.
 * @s: pointer to char buffer array.
 * @b: the constant
 * @n: Bytes number
 * Return: returns a pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
