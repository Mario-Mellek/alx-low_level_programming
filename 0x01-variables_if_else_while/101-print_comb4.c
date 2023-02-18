#include <stdio.h>
/**
 * main - Entry point
 * A program that prints all possible
 * different combinations of three digits.
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int l;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (l = j + 1; l <= '9'; l++)
			{
				putchar(i);
				putchar(j);
				putchar(l);
				if (i == '7' && j == '8' && l == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
