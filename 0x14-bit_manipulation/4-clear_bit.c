#include "main.h"
#include <limits.h>

/**
 * clear_bit - A function that sets the value
 * of a bit to 0 at a given index.
 * @n : pointer to an unsigned long int
 * @index: index of the bit to switch to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * CHAR_BIT - 1)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
