#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
