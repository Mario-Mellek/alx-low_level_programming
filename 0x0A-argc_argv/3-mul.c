#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies
 * two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if failed otherwise exit success
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	exit(EXIT_SUCCESS);
}
