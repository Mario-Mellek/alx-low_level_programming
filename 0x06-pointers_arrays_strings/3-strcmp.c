#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First string param
 * @s2: second string param
 * Return: int with value 0 if equal otherwise the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0'); i++)
	;
	return (s1[i] - s2[i]);
}
