#include "main.h"
#include <stdlib.h>

char *rot13(char *str)
{
	int i, len = 0;
	char *result;

	while (str[len] != '\0')
		len++;

	result = malloc(sizeof(char) * (len + 1));

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result[i] = ((str[i] - 'a' + 13) % 26) + 'a';

		else if (str[i] >= 'A' && str[i] <= 'Z')
			result[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		else
			result[i] = str[i];
	}
	result[i] = '\0';
	return (result);
}
