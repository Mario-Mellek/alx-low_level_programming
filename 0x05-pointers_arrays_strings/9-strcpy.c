#include "main.h"

/**
 * _strcpy - function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer paramater
 * @src: pointer paramater
 * Return: returns a char
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (len = 0; len <= i; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
