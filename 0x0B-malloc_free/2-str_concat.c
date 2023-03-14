#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates
 * two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: returns a pointer to the concatenated string
 */


char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2 += 1;
	arr = (char *) malloc(sizeof(char) * (len1 + len2));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1 + 1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = len1; i < (len1 + len2); i++)
	{
		arr[i] = s2[i - len1];
	}
	return (arr);
}
