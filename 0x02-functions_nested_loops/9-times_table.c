#include "main.h"

/**
 * times_table - A function that prints
 * the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k == 0 && j == 0)
				_putchar(k + '0');
			else if (k > 9)
			{
				l = k % 10;
				k /= 10;
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
