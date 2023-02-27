#include "main.h"

/**
 * _strlen - A function that returns
 * the length of a string.
 * @s: pointer paramater.
 * Return: returns the count value after iteration
 */


int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
