#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @s: String param
 * Return: returns string pointer
 */

char *leet(char *s)
{
	int i, j;

	char input[] = "aAeEoOtTlL";
	char output[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j]; j++)
			if (input[j] == s[i])
			{
				s[i] = output[j];
				break;
			}
	}
	return (s);
}
