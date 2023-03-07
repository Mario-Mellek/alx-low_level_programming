#include "main.h"

/**
 * _strspn - A function that gets the length
 * of a prefix substring.
 * @s: pointer to src string containing the prefix
 * @accept: pointer to the checked strings
 * Return: returns the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == (int)len)
		{
			int j = 0;

			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					len++;
				j++;
			}
		}
		i++;
	}
	return (len);
}
