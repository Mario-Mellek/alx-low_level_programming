#include "main.h"
int sqrFinder(int y, int z);

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: input number
 * Return: returbs sqr root of n
 */

int _sqrt_recursion(int n)
{
	int result = (sqrFinder(n, 1));

	return (result);
}

/**
 * sqrFinder - checks if the number has a natural square root
 * @y: integer input
 * @z: starting point
 * Return: recursive function if valid or -1
 */

int sqrFinder(int y, int z)
{
	if (z * z == y)
		return (z);

	if (z * z < y)
		return (sqrFinder(y, ++z));

	return (-1);
}
