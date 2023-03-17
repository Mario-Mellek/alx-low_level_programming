#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPtr;
	int i;
	char *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrPtr = malloc(size * nmemb);

	if (arrPtr == NULL)
		return (NULL);

	i = 0;
	zero = arrPtr;
	while (i < (int) (nmemb * size))
	{
		zero[i] = 0;
		i++;
	}
	return (arrPtr);
}
