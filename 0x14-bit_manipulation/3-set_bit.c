#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
		return (*n |= (1 << index));
	else
		return (-1);
}
