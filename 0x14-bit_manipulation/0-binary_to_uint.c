#include "main.h"




unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (result);

	for (i = 0; b[i] == '0' || b[i] == '1' ; i++)
	{	
		result <<= 1;
		result += b[i]-'0';
	}

	if (b[i] != '\0')
	{
		result = 0;
	}

	return result;
}
