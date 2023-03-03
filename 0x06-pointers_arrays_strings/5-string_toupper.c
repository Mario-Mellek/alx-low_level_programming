#include "main.h"

/**
 * string_toupper - A function that changes all
 * lowercase letters of a string to uppercase.
 * @lower: lowercase string
 * Return: Returns a pointerto uppercase string
 */

char *string_toupper(char *lower)
{
	int i = 0;
	char *upper;

	while (lower[i] != '\0')
	{
		if (lower[i] >= 'a' && lower[i] <= 'z')
		{
			lower[i] = lower[i] - 32;
		}
		i++;
	}
	upper = lower;
	return (upper);
}
