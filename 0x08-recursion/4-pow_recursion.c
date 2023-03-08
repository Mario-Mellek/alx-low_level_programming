#include "main.h"

/**
 * _pow_recursion - A function that returns the
 * value of x raised to the power of y.
 * @x: the number to multiply
 * @y: the number power to raise to
 * Return: returns a recursive function unless y is 0
 * returns 1 or less than 0 returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
