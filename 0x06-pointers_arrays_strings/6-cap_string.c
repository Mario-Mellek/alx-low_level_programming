#include "main.h"

/**
 * cap_string - A function that capitalizes all
 * words of a string.
 * @s: lowercase string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = i - 1;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((i == 0)
					||
					(s[j] >= 9 && s[j] <= 10)
					||
					(s[j] >= 32 && s[j] <= 34)
					||
					(s[j] >= 40 && s[j] <= 41)
					||
					(s[j] == 46)
					||
					(s[j] == 59)
					||
					(s[j] == 123 || s[j] == 125))
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
