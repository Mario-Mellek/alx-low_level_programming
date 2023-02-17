#include <stdio.h>

/**
 * main - Entry point
 *
 * loops from a to z
 *
 * Return: returns 0
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
