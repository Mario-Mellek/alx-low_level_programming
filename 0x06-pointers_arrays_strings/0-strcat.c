#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	for(i = 0; i != '\0'; i++);
	for(j = 0; j < i ; j++)
	{
		if(src[j] != '\0')
		{
			dest[i + j] = src[j];
		} else
		{
			dest[i + j] = '\0';
		}
	}
	return (dest);
}
