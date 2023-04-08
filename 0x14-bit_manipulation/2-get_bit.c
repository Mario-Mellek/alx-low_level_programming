#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > 1)
		return ((n & (1 << index)) != 0);
	else
		return (-1);
}
