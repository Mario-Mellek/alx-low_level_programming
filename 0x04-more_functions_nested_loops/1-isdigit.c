#include "main.h"

/**
 * _isdigit - A function that checks
 * for a digit (0 through 9).
 * @c: input value
 * Return: return 1 if number matches condition
 * else returns 0
 */

int _isdigit(int c)
{
	int i;

	c >= '0' && c <= '9' ? (i = 1) : (i = 0);
	return (i);
}
