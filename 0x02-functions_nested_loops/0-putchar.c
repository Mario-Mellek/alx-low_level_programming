#include "main.h"

/**
 * main - A program that prints _putchar,
 * followed by a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	char input[] = "_putchar";
	int size = 0;

	while (size < 8)
	{
		_putchar(input[size]);
		size++;
	}
	_putchar('\n');
	return (0);
}
