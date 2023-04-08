#include "main.h"

/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int
 * @b: string pointer
 * Return: the converted number, or 0 if b is null or contains other chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (result);

	for (i = 0; b[i] == '0' || b[i] == '1' ; i++)
	{
		result <<= 1;
		result += b[i] - '0';
	}

	if (b[i] != '\0')
	{
		result = 0;
	}

	return (result);
}
