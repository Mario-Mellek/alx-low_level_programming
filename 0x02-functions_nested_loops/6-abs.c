#include "main.h"

/**
 * _abs - A function that computes
 * the absolute value of an integer.
 * @n: entry value
 * Return: integer * -1 if negative
 * else returns integer value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
