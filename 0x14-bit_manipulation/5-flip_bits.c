#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
