#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: returns 0
 */
int main(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i == '9')
		{
			continue;
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
