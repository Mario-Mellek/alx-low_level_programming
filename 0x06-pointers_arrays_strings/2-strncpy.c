#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if(src[i] != '\0')
		{
			dest[i] = src[i];
		} else
		{
			continue;
		}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
