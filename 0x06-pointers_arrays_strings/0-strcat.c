#include "main.h"

/**
 * _strcat - A function that
 * concatenates two strings.
 * @dest:first paramater
 * @src: second paramater dor concatenation
 * Return: returns the string after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0 ; j < i ; j++)
	{
		if (src[j] != '\0')
		{
			dest[j + i] = src[j];
		} else
		{
			continue;
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
