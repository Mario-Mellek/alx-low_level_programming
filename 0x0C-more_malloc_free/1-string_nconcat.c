#include "main.h"
#include <stdlib.h>

int _strlen(char *len)
{
	int i = 0;

	while(len[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		return (NULL);
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		return (NULL);
	else
		len2 = _strlen(s2);

	if ((int) n > len2)
		n = len2;

	ptr = malloc(sizeof(*ptr) * (len1 + n + 1));
	
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < (int) (len1 + n))
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
