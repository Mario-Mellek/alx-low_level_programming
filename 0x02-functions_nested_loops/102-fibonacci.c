#include <stdio.h>

/**
 * main - A program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */

int main(void)
{
	int limit = 50, i;
	int j = 1, temp;

	for (i = 0; i < limit;)
	{
		if (i == 34)
		{
			printf("%d", i);
			break;
		}
		printf("%d, ", i);
		temp = i + j;
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
