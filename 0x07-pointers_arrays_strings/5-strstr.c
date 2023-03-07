#include "main.h"
#define NULL ((void *)0)

/**
 * _strstr - A function that locates a substring.
 * @haystack: pointer to src
 * @needle: target charachter
 * Return: returns pointer to the string else NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *pointer = haystack - 1;
	int i, j;

	i = 0;
	while (needle[i] != '\0')
	{
		i++;
	}

	pointer++;
	while (*pointer != '\0')
	{
		for (j = 0; j < i; j++)
		{
			if (pointer[j] != needle[j])
			{
				break;
			}
		}
		if (j == i)
			return (pointer);
		pointer++;
	}

	return (NULL);
}
