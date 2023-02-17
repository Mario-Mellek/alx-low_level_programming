#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 when the programs ends
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n == 0 ? printf("%d is zero", n)
		: n > 0 ? printf("%d is positive", n)
		: printf("%d is negative", n);
	putchar('\n');
	return (0);
}
