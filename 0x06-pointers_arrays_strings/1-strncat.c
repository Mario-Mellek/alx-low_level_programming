#include "main.h"

/**
 * _strncat - A function that
 * concatenates two strings.
 * @dest:first paramater
 * @src: second paramater dor concatenation
 * @n: Bytes number
 * Return: returns the string after concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0 ; j < n ; j++)
	{
		if (src[j] != '\0')
		{
			dest[j + i] = src[j];
		} else
		{
			break;
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
