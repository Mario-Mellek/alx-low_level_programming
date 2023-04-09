#include "main.h"

/**
 * flip_bits - A function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: returns the number of bits needed to flip from one num to another.
 */

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
