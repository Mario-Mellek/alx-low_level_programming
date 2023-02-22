#include "main.h"

/**
 * print_last_digit - A function that prints
 * the last digit of a number.
 * @n: Entry number
 * Return: -integer if less than 0 else integer
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -(n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}

	lastDigit = (n % 10);
	_putchar(lastDigit + '0');
	return (lastDigit);
}
