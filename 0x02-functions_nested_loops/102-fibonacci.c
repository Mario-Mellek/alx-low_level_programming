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

	for (i = 1; i <= limit;)
	{
		if (i == limit)
		{
			printf("%ld", i);
			break;
		}
		if (j == 1)
		{
			j++;
		}
		printf("%ld, ", i);
		temp = i + j;
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
