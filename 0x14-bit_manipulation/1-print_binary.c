#include "main.h"

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	n &= 1;
	_putchar(n+'0');
}
