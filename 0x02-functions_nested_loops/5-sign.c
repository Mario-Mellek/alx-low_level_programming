#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * the sign of a number.
 * @n: entry variable.
 * Return: returns 0, unless positive (1) or negative (-1)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	_putchar ('0');
	return (0);
}
