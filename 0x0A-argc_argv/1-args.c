#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number
 * of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: exit success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d", argc - 1);
	putchar('\n');
	exit(EXIT_SUCCESS);
}
