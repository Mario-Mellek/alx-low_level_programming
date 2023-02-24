#include <stdio.h>

/**
 * main - A program that finds and
 * prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 * Return: return 0
 */

int main(void)
{
	long int n = 612852475143;
	int div = 2;
	int maxFact;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
