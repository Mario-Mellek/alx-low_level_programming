#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - A function that locates a
 * character in a string.
 * @s: The string
 * @c: the charachter to find
 * Return: returns pointer to the first occurrence of
 * the character c in the string s else NULL
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		if ((*(s + i)) == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
