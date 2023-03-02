#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: destination
 * @src: source
 * @n: Bytes number
 * Return: returns a pointer to the
 * resulting string dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		} else
		{
			break;
		}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
