#include "main.h"

/**
 * _memcpy - A function that fills
 * memory with a constant byte.
 * @dest: pointer to the destination string.
 * @src: pointer to the src string.
 * @n: Bytes number
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
