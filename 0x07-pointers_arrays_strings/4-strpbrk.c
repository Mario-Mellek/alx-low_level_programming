#include "main.h"
#define NULL ((void *)0)

/**
 * _strpbrk - A function that searches a
 * string for any of a set of bytes.
 * @s: pointer to the src string.
 * @accept: target chars
 * Return: pointer to the string else NULL
 */


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
