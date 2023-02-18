#include <stdio.h>

/**
 * main - Prints every possible combination
 * with no repitition
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '0' && j < '1')
				continue;
			if (i == '1' && j < '2')
				continue;
			if (i == '2' && j < '3')
				continue;
			if (i == '3' && j < '4')
				continue;
			if (i == '4' && j < '5')
				continue;
			if (i == '5' && j < '6')
				continue;
			if (i == '6' && j < '7')
				continue;
			if (i == '7' && j < '8')
				continue;
			if (i == '8' && j < '9')
				continue;
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
