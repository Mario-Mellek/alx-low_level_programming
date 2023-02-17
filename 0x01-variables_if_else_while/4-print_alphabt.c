#include <stdio.h>

/**
 * main - Entry point
 *
 * loops and prints from a to z excpet q and e
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i == 'q') || (i == 'e'))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
