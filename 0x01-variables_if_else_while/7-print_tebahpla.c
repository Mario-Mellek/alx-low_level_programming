#include <stdio.h>

/**
 * main - Entry point
 *
 * loops from a to z in reverse
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
