#include <stdio.h>
/**
 * main - Entry point
 * A program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: returns 0
 */
int main(void)
{
	int i, j, k, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0' ; j <= '9'; j++)
		{
			m = j + 1;
			k = i;
			for (k = '0'; k <= '9'; k++)
			{
				for (m = '0'; m < '9'; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i < '9' || j < '8' || k < '9' || m < '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				m = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
