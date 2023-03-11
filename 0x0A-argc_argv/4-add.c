#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 if successfull otherwise 1
 */

int main(int argc, char **argv)
{
	int i, result;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
