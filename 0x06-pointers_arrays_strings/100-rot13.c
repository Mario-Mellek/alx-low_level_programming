#include "main.h"

char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	j = 0;
	while (j < i)
	{
		if ((str[j] >= 'a' && str[j] <= 'm')
				|| (str[j] >= 'A' && str[j] <= 'M'))
			str[j] += 13;
		else if ((str[j] >= 'n' && str[j] <= 'z')
				|| (str[j] >= 'N' && str[j] <= 'Z'))
			str[j] -= 13;
		j++;
	}
	return (str);
}
