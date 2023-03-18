#include <stdio.h>

/**
 * main - A program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */

int main(void)
{
	long int limit = 20365011074;
	long int j = 1, i, temp;

	for (i = 0; i <= limit;)
	{
		if (i == limit)
		{
			printf("%ld", i);
			break;
		}
		printf("%ld, ", i);
		temp = i + j;
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
