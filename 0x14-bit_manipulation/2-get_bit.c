#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > 1)
		return ((n & (1 << index)) != 0);
	else
		return (-1);
}
