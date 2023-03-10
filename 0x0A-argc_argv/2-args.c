#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all
 * arguments it receives.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: exit success
 */


int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
