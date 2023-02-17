#include <stdio.h>

/**
 * main - Prints base 10 numbers (0 .. 9)
 *
 * Return: return 0 when concludes
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
